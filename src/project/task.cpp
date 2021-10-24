#include "task.hpp"

unsigned int Task::RUNNINGTASKNUM = 0;

void Task::setFuncName(std::function<int(std::string)> newName)
{
    func = newName;
}

void Task::setParam(const std::string& file)
{
    paramFile = file;
}

void Task::execFunc()
{
    returnCode = func(this->paramFile);
}