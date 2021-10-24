#include <iostream>
#include <string>
<<<<<<< HEAD

#ifndef __TASK
#define __TASK













=======
#include <vector>
#include <queue>
#include <thread>
#include <unistd.h>
#include <fstream>
#include <functional>

#ifndef __TASK
#define __TASK
class Task
{
public:
    Task() : taskStatus(-1), func(nullptr) {}

public:
    void setArg(std::string str) { arg = str; }
    void setFunc(std::function<int(std::string)> ff) { func = ff; }
    void setStatus(int status) { taskStatus = status; }
    std::string getArg() { return arg; }
    int getStatus() { return taskStatus; }
    std::function<int(std::string)> getFunc() { return func; }
    void execTask();

private:
    std::function<int(std::string)> func;
    int taskStatus; // 初始：-1 成功：0 报错：1
    std::string arg;
};

class RunTask
{
public:
    void startTaskList();
    void stopTaskList();
    void addList(Task &);
    void setAddTaskFlag(bool flag) { ADDTASKFLAG = flag; }
    bool getAddTaskFlag() { return ADDTASKFLAG; }
    Task *getTask(size_t i) { return taskList[i]; }
    int getRunTaskNum() { return runTaskNum; }
    static void setRunTaskNum(int a)
    {
        if (a + runTaskNum >= 0)
            runTaskNum += a;
        else
        {
            throw std::runtime_error("err-runTaskNum:");
        }
    }

private:
    static int runTaskNum; //运行中任务数
    std::vector<Task *> taskList;
    unsigned int MAXTASKNUM;
    bool ADDTASKFLAG; //添加任务开关
};
int RunTask::runTaskNum = 0;
>>>>>>> 47821fefde26ecf38b55d6c49bc736364b664af2
#endif