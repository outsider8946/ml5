#include "timer_.h"
timer_::timer_(int x,int y): hours(x),mins(y){}
timer_::timer_(std::string str)
{
    hours = (str[0]-48)*10+ str[1]-48;
    mins  = (str[3]-48)*10+ str[4]-48;
}

int timer_::GetH() const
{
    return hours;
}
int timer_::GetM() const
{
    return mins;
}
