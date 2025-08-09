#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShaderProgram>
#include"Render/Renderer.h"
class Canvas : public QOpenGLWidget, public QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
private:
    Renderer*renderer;
public:
    Canvas(QWidget *parent = nullptr);
    ~Canvas() override;

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int width, int height) override;

};
