#include "MyWorld3.h"
#include"GlobalVar.h"
MyWorld3::MyWorld3(QWidget* parent)
    : QMainWindow(parent),ui(new Ui::MainWindow())
{
    ui->setupUi(this);
    //
    ConfigureTp&info=ToConfigure(Configure["Game"]);
    int sizex=ToQjsonValue(info["sizex"]).toInt();
    int sizey=ToQjsonValue(info["sizey"]).toInt();
    int posx=ToQjsonValue(info["posx"]).toInt();
    int posy=ToQjsonValue(info["posy"]).toInt();
    QString title=ToQjsonValue(info["title"]).toString();
    QString icon=ToQjsonValue(info["icon"]).toString();
    //
    resize(QSize(sizex,sizey));
    setWindowIcon(QIcon(icon));
    setWindowTitle(title);
    move(posx,posy);
}

MyWorld3::~MyWorld3()
{

}