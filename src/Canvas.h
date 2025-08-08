#pragma once

#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QOpenGLShaderProgram>

class Canvas : public QOpenGLWidget, protected QOpenGLFunctions_3_3_Core
{
    Q_OBJECT

public:
    Canvas(QWidget *parent = nullptr);
    ~Canvas() override;

protected:
    void initializeGL() override;
    void paintGL() override;
    void resizeGL(int width, int height) override;

};
