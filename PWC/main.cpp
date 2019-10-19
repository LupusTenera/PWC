#include <QtCore/qglobal.h>
#if QT_VERSION >= 0x050000
#include <QtGui/QGuiApplication>
#include <QtQml/QQmlApplicationEngine>
#else
#endif
#include <FelgoApplication>

int main(int argc, char *argv[])
{
    QGuiApplication app (int argc, char *[]);
    FelgoApplication felgo ;

    QQmlApplicationEngine engine;
    felgo.initialize(&engine);

    engine.load(QUrlStringLiteral(qrc:/main.qml));

    return app.exec();
}
