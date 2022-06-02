#ifndef TIMER__H
#define TIMER__H
#include <string>
class timer_
{
public:
   explicit timer_(int x,int y);
   explicit timer_(std::string str);
   int GetH () const;
   int GetM () const;
   const timer_& operator+(int value) const
   {
       if(mins+value<60)
       {
          return timer_ (hours,mins+value);
       }
       else
       {
           if(hours+((mins+value)/60)>23)
           {
               return timer_((hours+(mins+value)/60)-24, (mins+ value)%60);
           }
           return timer_( hours+(mins+value)/60,(mins+ value)%60);
       }
   }
    const int& operator-(const timer_& t_1) const
   {
        return (abs(hours-t_1.hours)*60 + abs(mins- t_1.mins));
   }
private:
    int hours;
    int mins;
};

#endif // TIMER__H
