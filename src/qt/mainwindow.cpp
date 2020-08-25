#include "qt/mainwindow.h"

DNAVIZ::MainWindow::MainWindow(QWidget *parent){
  // do admin
  resize(640, 480);
  setWindowTitle(
    QApplication::translate("dnaviz", "DNA-Viz")
  );

  // initialise Widgets
  DNAVIZ::Viewer *viewer = new DNAVIZ::Viewer(this);
  DNAVIZ::Utilities *utilities = new DNAVIZ::Utilities(this);

  // create central widget and allocate layout to it
  QWidget *central_widget = new QWidget;
  QHBoxLayout *layout = new QHBoxLayout;

  // add widgets to the layout
  layout->addWidget(viewer);
  layout->addWidget(utilities);

  // set the layout and activate central widget
  central_widget->setLayout(layout);
  setCentralWidget(central_widget);
};