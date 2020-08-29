#ifndef ENGINE_H
#define ENGINE_H

#include <QOpenGLFunctions>
#include <QOpenGLShaderProgram>
#include <QOpenGLBuffer>
#include <QVector2D>
#include <QVector3D>

namespace DNAVIZ {
class Engine : protected QOpenGLFunctions
{
public:
    Engine(QVector3D *position, float radius);
    virtual ~Engine();

    void drawSphereGeometry(QOpenGLShaderProgram *program);

private:
    void initSphereGeometry(QVector3D *position, float radius);

    QOpenGLBuffer arrayBuf;
    QOpenGLBuffer indexBuf;
};

struct VertexData
{
    QVector3D position;
    QVector3D color;
};
};
#endif // GEOMETRYENGINE_H