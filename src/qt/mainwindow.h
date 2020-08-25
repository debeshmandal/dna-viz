#ifndef DNAVIZ_MAINWINDOW_H
#define DNAVIZ_MAINWINDOW_H
#include <QtWidgets>
#include "qt/viewer.h"
#include "qt/utilities.h"

namespace DNAVIZ {
  class MainWindow : public QMainWindow {
    public:
      explicit MainWindow(QWidget *parent = 0);
  };
}
#endif