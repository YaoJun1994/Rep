#include "callBack.hpp"

int main()
{
    Call call;
    Action action;
    std::cout << "action: " << &action << "\n";
    //action.setsignal(std::string("this is a call back signal\n"));
    call.connectfunc(std::bind(&Action::display, action, std::placeholders::_1));
    call.callfunc(std::string("this is a call back signal\n"));

    return EXIT_SUCCESS;
}