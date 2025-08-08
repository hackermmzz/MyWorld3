#pragma once
//
#include <exception>
#include<iostream>
using std::string;
//
class Exception:public std::exception
{
private:
    string msg;
public:
    Exception();
    Exception(const string&msg);
    virtual string what();
    virtual ~Exception();
};

