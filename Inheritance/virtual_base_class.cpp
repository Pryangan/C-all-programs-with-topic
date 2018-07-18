// also called virtual inheritance;

#include<iostream>
using namespace std;

class A
{
protected:
    int a=10;
};

class B :virtual public A
{
protected:
    int b=20;
};

class C : public virtual A
{
protected:
    int c=30;
};

class D :public B,public C
{
protected:
    int d=40;
public:
    void disp()
    {
        cout<<endl<<a<<endl<<b<<endl<<c<<endl<<d;
    }
};

int main(void)
{
    D d;
    d.disp();

    return 0;
}
