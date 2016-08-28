#include <QApplication>
#include <QLabel>

#ifdef QT_STATIC
    #include <QtCore/QtPlugin>
    Q_IMPORT_PLUGIN (QWindowsIntegrationPlugin)
#endif

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QImage myImage;
    myImage.load(":/fsZI0.jpg");

    QLabel myLabel;
    myLabel.setPixmap(QPixmap::fromImage(myImage));
    myLabel.setFixedSize(myImage.size());

    myLabel.show();

    return a.exec();
}
