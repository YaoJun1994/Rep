#include "task.hpp"

<<<<<<< HEAD
=======
void RunTask::startTaskList()
{
    for (size_t i = 0; i < MAXTASKNUM; i++)
        taskList.push_back(new Task);
}
void RunTask::stopTaskList()
{
    for (auto &tk : taskList)
        delete tk;
    taskList.clear();
}

void Task::execTask()
{
    if (this->getFunc())
    {
        RunTask::setRunTaskNum(1);
        taskStatus = func(arg);
        func = nullptr;
        RunTask::setRunTaskNum(-1);
    }
}
void RunTask::addList(Task &task)
{
    if (runTaskNum < MAXTASKNUM && ADDTASKFLAG)
        for (auto it = taskList.begin(); (it != taskList.end()); it++)
        {
            if (((*it)->getStatus()) != -1) //不是初始状态，已经执行过了
            {
                delete (*it);
                **it = task;
                break;
            }
        }
}
>>>>>>> 47821fefde26ecf38b55d6c49bc736364b664af2
