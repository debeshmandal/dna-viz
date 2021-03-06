#ifndef VIEWER_H
#define VIEWER_H

#include "opengl/geometryengine.h"

#include <QOpenGLWidget>
#include <QOpenGLFunctions>
#include <QMatrix4x4>
#include <QQuaternion>
#include <QVector2D>
#include <QBasicTimer>
#include <QOpenGLShaderProgram>
#include <QOpenGLTexture>

namespace DNAVIZ {
  class Viewer : public QOpenGLWidget, protected QOpenGLFunctions {
    Q_OBJECT

  public:
    using QOpenGLWidget::QOpenGLWidget;
    ~Viewer();

  protected:
    void mousePressEvent(QMouseEvent *e) override;
    void mouseReleaseEvent(QMouseEvent *e) override;
    void timerEvent(QTimerEvent *e) override;

    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;

    void initShaders();
    void initTextures();

  private:
    QBasicTimer timer;
    QOpenGLShaderProgram program;
    DNAVIZ::GeometryEngine *geometries = nullptr;

    QOpenGLTexture *texture = nullptr;

    QMatrix4x4 projection;

    QVector2D mousePressPosition;
    QVector3D rotationAxis;
    qreal angularSpeed = 0;
    QQuaternion rotation;
  };
};
#endif