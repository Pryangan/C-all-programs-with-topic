#include<iostream>
using namespace std;

class A
{
    int a;
public:
    A(int x)
    {
        a = x;
        cout<<"class A"<<endl;
    }
    void disp_a()
    {
        cout<<a;
    }
};

class B
{
    int b;
public :
    B(int y)
    {
        b = y;
        cout<<"class B"<<endl;
    }
    void disp_b()
    {
        cout<<b;
    }
};

class C : public B,public A         // pehle B class ka constructor chalega fir Aclass ka
{
    int c;
public :
    C(int x,int y,int z):A(y),B(x)
    {
        c = z;
        cout<<"class C"<<endl;
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
