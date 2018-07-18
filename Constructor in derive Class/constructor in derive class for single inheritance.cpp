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

int main(void)
{
    B ob(2,3);
    ob.disp_a();
    ob.disp_b();

    return 0;
}
