#pragma once
#include "EventListener.h"
#include "Logger/logger.h"
#include <qjsonvalue.h>
#include<map>
using namespace std;
using ConfigureTp=map<QString,void*>;
////////////////////////////////////////////////
extern EventListener*eventListener;
extern ConfigureTp Configure;
extern Logger Out,Error,Debug;
////////////////////////////////////////////////
QJsonValue& ToQjsonValue(void*ptr);
ConfigureTp& ToConfigure(void*ptr);
////////////////////////////////////////////////