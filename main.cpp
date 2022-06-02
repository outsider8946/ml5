#include <iostream>
#include <timer_.h>
using namespace std;
int main()
{
    timer_ t(15,20);
    timer_ t_1(00,00);
    int cnt  = t -t_1;
    cout<< cnt <<endl;
    t_1= t_1+cnt;
    cout<<t_1.GetH()<<endl;
    cout<<t_1.GetM()<<endl;
}
