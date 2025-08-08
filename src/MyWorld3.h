#pragma once
#include  <qmainwindow.h>
#include   "ui_OpenGL.h"
class MyWorld3 : public QMainWindow {
    Q_OBJECT
private:
    Ui::MainWindow*ui;
public:
    MyWorld3(QWidget* parent = nullptr);
    ~MyWorld3();
};