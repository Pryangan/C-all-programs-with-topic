#include<iostream>
using namespace std;

class student
{
protected:
    int roll;
public:
    void get_roll(int x)
    {
        roll = x;
    }
};

class marks : public student
{
protected:
    int m1;
    int m2;
public:
    void get_M(int x,int y)
    {
        m1 = x;
        m2 = y;
    }
};

class sport{
protected:
    int sprt;
public:
    void get_sprt(int s)
    {
        sprt = s;
    }
};

class test : public marks,public sport
{
    int t;
public:
    void disp()
    {
        cout<<"Roll : "<<roll<<endl;
        cout<<"mark 1 : "<<m1<<endl;
        cout<<"Mark 2 : "<<m2<<endl;
        cout<<"Sport : "<<sprt<<endl;
        t=m1+m2+sprt;
        cout<<"Total : "<<t;
    }
};

int main(void)
{
    test t;
    t.get_roll(11);
    t.get_M(30,23);
    t.get_sprt(21);
    t.disp();

    return 0;
}
