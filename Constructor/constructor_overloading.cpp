#include<iostream>
using namespace std;

class test
{
    int a;
    int b;
    float f;
public:
    test();
    test(int);
    test(int,int);
    test(int,float);
    test(int,int,float);
    void disp();
};

test :: test()
{
    cout<<"Welcome to constructor"<<endl;
}

test :: test(int a)
{
    this->a = a;
}

test :: test(int a,int b)
{
    this->a = a;
    this->b = b;
}

test :: test(int a,float f)
{
    this->a = a;
    this->f = f;
}

test :: test(int a,int b,float f)
{
    this->a = a;
    this->b = b;
    this->f = f;
}

void test :: disp()
{
    cout<<endl<<"a is "<<a<<",b is "<<b<<",f is "<<f;
}

int main(void)
{
    test t,t1(3),t2(1,2),t3(4,(float)4.5),t4(2,5,6.4);
    t.disp();
    t1.disp();
    t2.disp();
    t3.disp();
    t4.disp();

    return 0;
}
