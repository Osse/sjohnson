#ifndef LABEL_H
#define LABEL_H

#include <QLabel>
#include <QMetaEnum>

class QKeyEvent;

class Label : public QLabel
{
    Q_OBJECT
public:
    Label(QWidget* parent = nullptr);

signals:
    emit void reportKeys(const QString& str);

protected:
    virtual void keyPressEvent(QKeyEvent* ev);

private:
    QMetaEnum keys;
    QMetaEnum modifiers;
};

#endif  // LABEL_H
