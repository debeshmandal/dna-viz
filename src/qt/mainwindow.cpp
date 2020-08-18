#include "mainwindow.h"

DNAVIZ::MainWindow::MainWindow(QWidget *parent){
  resize(640, 480);
  setWindowTitle(
    QApplication::translate("dnaviz", "DNA-Viz")
  );
  QWidget *central_widget = new QWidget;
  DNAVIZ::Viewer *viewer = new DNAVIZ::Viewer(this);
  QVBoxLayout *layout = new QVBoxLayout;
  layout->addWidget(viewer);
  central_widget->setLayout(layout);

  setCentralWidget(central_widget);
};