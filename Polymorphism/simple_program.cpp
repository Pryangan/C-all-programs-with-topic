#include<iostream>
using namespace std;

class A
{
public:
    virtual void disp()=0;
};

class B:public A
{
    int a;
public:
    B(int x)
    {
        a = x;
    }
    void disp()
    {
        cout<<"Class B "<<endl;
        cout<<a<<endl;
    }
};

class C:public A
{
    int a;
public:
    C(int x)
    {
        a=x;
    }
    void disp()
    {
        cout<<"Class C "<<endl;
        cout<<a<<endl;
    }
};

int main(void)
{
    A *p;
    B ob1(3);
    C ob2(5);
    p = &ob1;
    p->disp();
    p = &ob2;
    p->disp();

    return 0;
}
