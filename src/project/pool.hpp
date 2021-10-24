#include <iostream>
#include <string>
#include <functional>
#include <unistd.h>
#include <mutex>
#include <queue>
#include <vector>
#include <thread>
#include "task.hpp"

#ifndef __POOL
#define __POOL
//最大线程数
const unsigned int MAXTHREADNUM = 3;
//等候队列长度
const unsigned int MAXTASKWAITINGNUM = 10;

class Pool
{
public:
    //启动进程池
    //终止进程池
    //添加未执行任务

private:
    //活动任务自动补充
    //进程守护
    void threadGuard();
private:
    //进程池状态开关
    bool poolStatus;
    //等候队列状态开关
    bool waitListStatus;
    //未执行任务列队
    std::queue<Task *> waitList;
    //执行中任务列队
    std::vector<Task *> runList;
    std::vector<std::thread*> threads;
};

#endif