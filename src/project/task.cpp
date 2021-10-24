#include "task.hpp"

unsigned int Task::RUNNINGTASKNUM = 0;

Task::Task()
{
    this->func = nullptr;
    this->returnCode = 999;
}

void Task::setFuncName(std::function<int(std::string)> newName)
{
    func = newName;
}

void Task::setParam(const std::string &file)
{
    paramFile = file;
}

void Task::execFunc()
{
    RUNNINGTASKNUM++;
    returnCode = func(this->paramFile);
    RUNNINGTASKNUM--;
}

unsigned int Task::getRunningTaskNum()
{
    return this->RUNNINGTASKNUM;
}