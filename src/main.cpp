#include "MyWorld3.h"
#include <QApplication>
#include "EventListener.h"
#include "GlobalVar.h"
#include "Config.h"
#pragma comment(lib, "user32.lib")
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //读取配置文件
    ConfigInit();
    //安装全局事件监听器
    eventListener=new EventListener();
    a.installEventFilter(eventListener);
    //
    MyWorld3 w;
    w.show();
    return a.exec();
}