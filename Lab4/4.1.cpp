#include <iostream>
using namespace std;
class time
{
    int hour,minutes,sec;
public:
    time(int hr=0,int m=0,int s=0):
    hour(hr),minutes(m),sec(s)
    {}

    time addTime(time b)
    {
        time c(hour+b.hour,minutes+b.minutes,sec+b.sec);
       if(c.sec>60){
        c.minutes+=c.sec/60;
        c.sec%=60;
       }
       if(c.minutes>60){
        c.hour+=c.minutes/60;
           c.minutes%=60;
       }
        return c;
    }
    void showTime(){
        cout<<"The time is "<<hour<<':'<<minutes<<':'<<sec<<endl;
    }
};
int main(){
    time a(5,87,96);
    time b(2,28,99);
    time c=a.addTime(b);
    c.showTime();
}
