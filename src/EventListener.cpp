#include"EventListener.h"
#include <iostream>
using namespace std;
//
EventListener::EventListener()
{

}

bool EventListener::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type()==QEvent::MouseButtonPress){
        cout<<"NMZL"<<endl;
    }
    return false;
}
