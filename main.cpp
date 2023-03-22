#include "qmlplot.h"
#include <QApplication>
#include <QQmlApplicationEngine>
#include <QtPrintSupport/QPrinter>

int main(int argc, char *argv[]) {
  QApplication a(argc, argv);

  qmlRegisterType<CustomPlotItem>("CustomPlot", 1, 0, "CustomPlotItem");

  QQmlApplicationEngine engine;
  engine.load(QUrl(QLatin1String("qrc:/main.qml")));

  return a.exec();
}
