#include <iostream>
#include <string>
#include <functional>

#ifndef __TASK
#define __TASK

class Task
{
public:
    //任务函数名绑定
    void setFuncName(std::function<int(std::string)>);
    //设置任务参数
    void setParam(const std::string&);
    //执行任务
    void execFunc();

private:
    //任务函数名
    std::function<int(std::string)> func;
    //返回码
    int returnCode;
    //错误信息
    std::string retErrInfo;
    //参数
    std::string paramFile;
    //运行中任务数
    static unsigned int RUNNINGTASKNUM;
};

#endif