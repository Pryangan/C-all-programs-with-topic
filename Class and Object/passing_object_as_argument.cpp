#include<iostream>
using namespace std;

class Time
{
    int hr;
    int minut;
    int sec;
public:
    void setTime(int,int,int);
    void displayTime();
    void getTime(Time,Time);
};

void Time :: setTime(int hr,int minut,int sec)
{
    (*this).hr = hr;
    (*this).minut = minut;
    (*this).sec = sec;
}

void Time :: displayTime()
{
    if(sec>=60)
    {
        minut = minut + (sec/60);
        sec = (sec%60);
    }

    if(minut>=60)
    {
        hr = hr + (minut/60);
        minut = (minut%60);
    }

    cout<<endl<<"Time is "<<hr<<" : "<<minut<<" : "<<sec<<endl;
}

void Time :: getTime(Time t1,Time t2)
{
    hr = t1.hr + t2.hr;
    minut = t1.minut + t2.minut;
    sec = t1.sec + t2.sec;
}

int main(void)
{
    Time t1,t2,t3;
    t1.setTime(12,61,67);
    t2.setTime(32,54,76);
    t3.getTime(t1,t2);
    t1.displayTime();
    t2.displayTime();
    t3.displayTime();
    return 0;
}
