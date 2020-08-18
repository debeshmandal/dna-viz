#ifndef DNAVIZ_MAINWINDOW_H
#define DNAVIZ_MAINWINDOW_H
#include <QtWidgets>
#include "viewer.h"

namespace DNAVIZ {
  class MainWindow : public QMainWindow {
    public:
      explicit MainWindow(QWidget *parent = 0);
  };
}
#endif