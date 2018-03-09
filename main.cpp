#include "label.h"

#include <QApplication>
#include <QDialog>
#include <QVBoxLayout>
#include <QDebug>

#ifdef QT_STATIC
#include <QtCore/QtPlugin>
Q_IMPORT_PLUGIN(QWindowsIntegrationPlugin)
#endif

int main(int argc, char* argv[])
{
    QApplication a(argc, argv);

    QImage myImage;
    myImage.load(":/fsZI0.jpg");


    Label myLabel;
    myLabel.setPixmap(QPixmap::fromImage(myImage));
    myLabel.setFixedSize(myImage.size());

    QLabel textLabel("Press a key");

    QDialog d;
    QVBoxLayout l;
    d.setLayout(&l);
    l.addWidget(&myLabel);
    l.addWidget(&textLabel);

    QObject::connect(&myLabel, &Label::reportKeys, &textLabel, &QLabel::setText);

    d.show();

    return a.exec();
}
