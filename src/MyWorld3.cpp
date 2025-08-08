#include "MyWorld3.h"

MyWorld3::MyWorld3(QWidget* parent)
    : QMainWindow(parent),ui(new Ui::MainWindow())
{
    ui->setupUi(this);
    resize(QSize(800,600));
    setWindowIcon(QIcon(QString("asset/image/Icon/icon.ico")));
    setWindowTitle("MyWorld3");
}

MyWorld3::~MyWorld3()
{

}