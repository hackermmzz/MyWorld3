#pragma once
#include<qevent.h>
#include<qobject.h>
//
class EventListener:public QObject{
public:
    EventListener();
protected:
    virtual bool eventFilter(QObject *watched, QEvent *event)override;
};
