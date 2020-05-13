#include "sneakertraclient.h"
#include <QApplication>
#include <QTranslator>
int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QTranslator ts;
    if(ts.load(":/en2ch.qm"))
    {
        app.installTranslator(&ts);
    }
    SneakerTraClient w;
    w.show();

    return app.exec();
}
