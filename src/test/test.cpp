#include <iostream>
#include <string>
#include <vector>
#include <queue>
#include <thread>
#include <unistd.h>
#include <fstream>
#include <functional>

void test1004()
{
    std::function<void()> func ;
    std::thread mythread(func);
    std::cout << mythread.joinable() << std::endl;
}
int main()
{

    test1004();

    return 0;
}