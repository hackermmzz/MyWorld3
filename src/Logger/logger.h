#pragma once

#include <QFile>
#include <iostream>
#include <fstream>
using namespace std;
///////////////////////////
class Logger{
private:
    ofstream*stream;
public:
    Logger();
    Logger(const char*file);
    Logger& operator=(const Logger&);
    //
    template<class T>
    Logger& operator<<(const T&msg){
        if(stream){
            (*stream)<<msg;
            stream->flush();
        }else{
            cout<<msg;
        }
        return *this;
    }
    //支持endl
    Logger& operator<<(std::ostream& (*manip)(std::ostream&)) {
        if (stream && stream->is_open()) {
            manip(*stream);  // 调用操纵符（如 endl）
        } else {
            manip(cout);  // 输出到控制台
        }
        return *this;
    }
    //
    ~Logger();
};

