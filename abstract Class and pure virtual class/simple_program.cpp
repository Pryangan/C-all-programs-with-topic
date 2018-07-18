#include<iostream>
using namespace std;

class Base          // this is a abstract class because disp() is a pure virtual class
{
public:
    virtual void disp()=0;
};

class Derived : public Base
{
public:
    void disp()
    {
        cout<<"Derived class";
    }
};

int main(void)
{
    Derived d;
    d.disp(); // it will print the derived class function disp()

    // Base b;  we can't create object for Base class because it is abstract class
    Base *p; // but we can create pointer of abstract class
    Derived d1;
    p=&d1;
    p->disp();
    return 0;
}
