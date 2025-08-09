#pragma once
#include "EventListener.h"
#include "Logger/logger.h"
#include <qjsonvalue.h>
#include <map>
using namespace std;
using ConfigureTp=map<QString,void*>;
////////////////////////////////////////////////
extern EventListener*eventListener;             //事件监听器
extern ConfigureTp Configure;                   //配置
extern Logger Out,Error,Debug;                  //log
class Canvas;extern Canvas*canvas;              //全局画板
////////////////////////////////////////////////
QJsonValue& ToQjsonValue(void*ptr);
ConfigureTp& ToConfigure(void*ptr);
////////////////////////////////////////////////