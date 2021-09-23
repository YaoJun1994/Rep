#include <iostream>
#include <string>
#include <functional>

#ifndef __CALLBACK
#define __CALLBACK

class Call
{
public:
    void connectfunc(std::function<void(std::string)> ffunc)
    {
        func = ffunc;
    }
    void callfunc(const std::string &str)
    {
        func(str);
    }

private:
    std::function<void(std::string)> func;
};

class Action
{
public:
    void display(const std::string &str)
    {
        std::cout << "Action: "<<this <<"\tsignal: "<< str <<"\n";
    }

};

#endif