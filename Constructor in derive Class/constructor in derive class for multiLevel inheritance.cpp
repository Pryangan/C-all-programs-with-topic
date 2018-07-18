#include<iostream>
using namespace std;

class A
{
    int a;
public:
    A(int x)
    {
        a = x;
    }
    void disp_a()
    {
        cout<<a;
    }
};

class B : public A
{
    int b;
public :
    B(int x,int y):A(x)
    {
        b = y;
    }
    void disp_b()
    {
        cout<<b;
    }
};

class C : public B
{
    int c;
public :
    C(int x,int y,int z):B(x,y)
    {
        c = z;
    }
    void disp_c()
    {
        cout<<c;
    }
};

int main(void)
{
    C ob(2,3,4);
    ob.disp_a();
    ob.disp_b();
    ob.disp_c();
    return 0;
}
