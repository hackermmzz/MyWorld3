#include "logger.h"

Logger::Logger(const char *file)
{
    loggerFile = new QFile(file);
    if (!loggerFile->open(QIODevice::WriteOnly)) {
        cout << "创建日志文件:" << file << "失败!" << endl;
        exit(0);
    }
}
//
//
Logger::~Logger()
{
    if (loggerFile->isOpen()) {
        loggerFile->close();
    }
    delete loggerFile;
}