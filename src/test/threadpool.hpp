#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <thread>
#include <unistd.h>
#include <fstream>
#include <functional>
#include <mutex>
#include "task.hpp"
#ifndef __THREADPOOL
#define __THREADPOOL

class ThreadPool
{
    const static int MAX_RUN_NUM = 3;

public:
    void start();
    void stop();
    

private:
    void startPool();

private:
    std::vector<std::thread *> pool;
    std::thread *myThread;
    static int runThreadNum; //在线线程数
    std::mutex Mutex;
    bool poolStatus;

    std::queue<Task *> taskList;     //等待任务清单
    RunTask runTasklList;
};
int ThreadPool::runThreadNum = 0;

#endif