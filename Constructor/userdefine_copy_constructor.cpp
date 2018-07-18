#include<iostream>
using namespace std;

class test
{
    int a;
    int b;
public:
    test(int a,int b)
    {
        this->a = a;
        this->b = b;
    }

    test(const test &t)
    {
        a = t.a;
        b = t.b;
    }

    void disp();
};

void test :: disp()
{
    cout<<a<<endl<<b;
}

int main(void)
{
    test t(2,4);
    t.disp();
    test t1(t);
    t1.disp();

    return 0;
}
