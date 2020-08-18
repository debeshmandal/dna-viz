#include <QApplication>
#include "qt/mainwindow.h"

int main(int argc, char *argv[]) {
  QApplication app(argc, argv);
  DNAVIZ::MainWindow window;
  window.show();
  return app.exec();
}