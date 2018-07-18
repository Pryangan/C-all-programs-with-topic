#include<iostream>
using namespace std;

class base
{
protected:
    int b;
public:
    void setB(int x)
    {
        b = x;
    }
    void disp(void)
    {
        cout<<"Base Class :"<<endl;
        cout<<"B is "<<b<<endl;
    }
};

class derived : public base
{
protected:
    int d;
public:
    void setD(int x)
    {
        d = x;
    }
    void disp()
    {
        cout<<"Derived class : "<<endl;
        cout<<"B is "<<b<<endl;
        cout<<"D is "<<d<<endl;
    }
};

int main(void)
{
    base *bp;   // base class ka pointer
    base b;     // base class ka object
    bp = &b;
    bp->setB(5);
    bp->disp();
//-----------------------------------------
    derived d;     // derived class ka object
    bp = &d;        //base class ka pointer
    bp->setB(3);
//    bp->setD(6);       bp ek base class ka pointer he toh woh bs unhi function ko invoke krega jo base class se derive class me inherit huya he
    bp->disp();         // yha base disp() chalega
//----------------------------------------------

    derived *dp;
    dp=&d;
    dp->setD(6);
    dp->disp();         // yha derived class ka disp function chalega
//---------------------------------------------

// par hum chahte ki base ka pointer ho par woh pointer apne class ke members ke sath sath derived class ke members ko invoke kre

    base *pbs;
    derived dv;
    pbs = &dv;

    pbs->setB(7);
    ((derived*)pbs)->setD(8);
    ((derived*)pbs)->disp();
    return 0;
}
