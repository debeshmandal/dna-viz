#include "mainwindow.h"

DNAVIZ::MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) {
  resize(320, 240);
  setWindowTitle(
    QApplication::translate("toplevel", "DNA-Viz")
  );
};