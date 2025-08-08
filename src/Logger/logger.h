#pragma once

#include <QFile>
#include <iostream>
using namespace std;
///////////////////////////
class Logger{
private:
     QFile* loggerFile;
public:
    Logger(const char*file);
    template<class T>
    Logger& operator<<(const T&msg){
        cout<<msg;
        return *this;
    }
    ~Logger();
};

