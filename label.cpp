#include "label.h"

#include <QKeyEvent>

Label::Label(QWidget* parent) : QLabel(parent)
{
    setFocusPolicy(Qt::StrongFocus);
    keys = QMetaEnum::fromType<Qt::Key>();
    modifiers = QMetaEnum::fromType<Qt::KeyboardModifiers>();
}

void Label::keyPressEvent(QKeyEvent* ev)
{
    QString str = keys.valueToKey(ev->key());
    str += " ";
    str += modifiers.valueToKey(ev->modifiers());
    emit reportKeys(str);
    QLabel::keyPressEvent(ev);
}
