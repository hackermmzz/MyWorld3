#include "Exception.h"

Exception::Exception()
{
    msg="null";
}

Exception::Exception(const string &msg_)
{
    msg=msg_;
}

string Exception::what()
{
    return msg;
}

Exception::~Exception()
{
    
}
