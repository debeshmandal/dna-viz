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
    //void drawEllipsoidGeometry(QOpenGLShaderProgram *program);
    //void drawCylinderGeometry(QOpenGLShaderProgram *program);

private:
    void initSphereGeometry(QVector3D *position, float radius);
    //void initEllipsoidGeometry();
    //void initCylinderGeometry();

    QOpenGLBuffer arrayBuf;
    QOpenGLBuffer indexBuf;
};

struct VertexData
{
    QVector3D position;
    QVector2D texCoord;
};
};
#endif // GEOMETRYENGINE_H