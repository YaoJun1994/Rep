#include "pool.hpp"

void Pool::threadGuard()
{
    while (poolStatus && (runList.size() < MAXTHREADNUM))
    {
        for (auto it = runList.begin(); it != runList.end(); it++)
        {
            if (((*it)->getRetCode() != 999) && threads.size() < MAXTHREADNUM)
            {
                std::function<void()> fun = std::bind(&Task::execFunc, *it);
                threads.push_back(new std::thread(fun));
                threads.back()->detach();
            }
        }
    }
}