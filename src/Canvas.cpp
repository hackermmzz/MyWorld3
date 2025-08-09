#include "Canvas.h"
#include "Render/Renderer.h"
Canvas::Canvas(QWidget *parent):QOpenGLWidget(parent)
{
    renderer=new Renderer();
}

Canvas::~Canvas()
{

}

void Canvas::initializeGL()
{
    //赋给全局变量
    extern Canvas *canvas;
    canvas=this;
    //
    //初始化opengl环境
    initializeOpenGLFunctions();
    //设置画刷颜色
    glClearColor(0.1,0.2,0.3,1.0);
}

void Canvas::paintGL()
{
    //直接绘制
    renderer->Render();
    //
}

void Canvas::resizeGL(int width, int height)
{

}
