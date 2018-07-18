#include<iostream>
using namespace std;

class test
{
    int a;
    int b;
public:
    test(int x,int y)
    {
        a = x;
        b = y;
    }
    void disp()
    {
        cout<<a<<endl<<b<<endl;
    }
    friend test operator -(test);
};

test operator -(test t)
{
    t.a = -(t.a);
    t.b = -(t.b);
    return t;
}

int main(void)
{
    test t(2,4);
    t.disp();
    test t1=-t;
    t1.disp();
    return 0;
}
