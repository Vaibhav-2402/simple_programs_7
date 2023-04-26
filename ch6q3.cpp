#include<iostream>
using namespace std;
//////////////////////////////////////////////

class time
{
    private:
    int hours;
    int minutes;
    int seconds;
    public:
    time() : hours(0),minutes(0),seconds(0)
    {

    }
    time(int hr,int mn, int sc) : hours(hr),minutes(mn),seconds(sc)
    {

    }
    void display()
    {
        cout<<hours<<":"<<minutes<<":"<<seconds;
    }
    void add_time(time t1, time t2)
    {
        seconds=t1.seconds+t2.seconds;
        if(seconds>59)
        {
            minutes++;
            seconds-=60;
        }
        minutes+=t1.minutes+t2.minutes;
        if(minutes>59)
        {
            hours++;
            minutes-=60;
        }
        hours+=t1.hours+t2.hours;
    }
};
//////////////////////////////////////////////////////////////////////////////

int main()
{
    time tt1(7,30,35);
    time tt2(8,45,50);
    time tt3;
    tt3.add_time(tt1,tt2);
    cout<<" Time after addition = "; tt3.display();

    return 0;
}