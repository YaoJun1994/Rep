#include "threadpool.hpp"

void ThreadPool::startPool()
{
    if (poolStatus&&runTasklList.getAddTaskFlag())
    {
        for (int i = 0; i < MAX_RUN_NUM; i++)
        {
            std::function<void()> func = std::bind(&Task::execTask,runTasklList.getTask(i));
            pool.push_back(new std::thread(func));
            if (pool.back()->joinable())
                pool.back()->detach();
        }
    }
    else if(!poolStatus)
        std::clog << "thread pool status off\n";
    else
        std::clog << "thread build fail cause by err-func\n";
}


