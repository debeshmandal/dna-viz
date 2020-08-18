#ifndef DNAVIZ_VIEWER_H
#define DNAVIZ_VIEWER_H
#include <QtWidgets>
#include <QLabel>
#include <QPainter>
#include <QString>

namespace DNAVIZ {
  class Viewer : public QLabel {
    Q_OBJECT
    public:
      explicit Viewer(QWidget *parent = nullptr);
  };
}
#endif