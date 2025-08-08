#include "Canvas.h"

Canvas::Canvas(QWidget *parent):QOpenGLWidget(parent)
{
    
}

Canvas::~Canvas()
{

}

void Canvas::initializeGL()
{
    //初始化opengl环境
    initializeOpenGLFunctions();
    //设置画刷颜色
    glClearColor(0.1,0.2,0.3,1.0);
}

void Canvas::paintGL()
{
    glClear(GL_COLOR_BUFFER_BIT);
}

void Canvas::resizeGL(int width, int height)
{

}
