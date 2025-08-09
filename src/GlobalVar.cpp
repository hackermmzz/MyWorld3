#include"GlobalVar.h"
/////////////////////////////////////////////
EventListener*eventListener=0;
ConfigureTp Configure;
Logger Out,Error,Debug;
Canvas*canvas=0;
/////////////////////////////////////////////
QJsonValue& ToQjsonValue(void* ptr)
{
    if(ptr==0){
        Error<<"ptr null"<<endl;
        exit(0);
    }
    return *static_cast<QJsonValue*>(ptr);
}

ConfigureTp& ToConfigure(void*ptr){
    if(ptr==0){
        Error<<"ptr null"<<endl;
        exit(0);
    }
    return *static_cast<ConfigureTp*>(ptr);
}