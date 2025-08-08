#include "logger.h"


Logger::Logger()
{
    stream=0;
}

Logger::Logger(const char *file)
{
    stream=new ofstream(file);
    //
    if (!stream->is_open()) {
        cout << "创建日志文件:" << file << "失败!" << endl;
        exit(0);
    }//
}

Logger &Logger::operator=(const Logger &log)
{
    Logger*cast=(Logger*)(void*)&log;
    //
    stream=cast->stream;
    cast->stream=0;
    return *this;
}

//
//
Logger::~Logger()
{
    if(stream){
        //
        stream->flush();
        stream->close();
        delete stream;
        stream=0;
    }   
}