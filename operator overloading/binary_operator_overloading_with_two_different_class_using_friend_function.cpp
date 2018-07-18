#include<iostream>
using namespace std;

class test1;
class test2;
class test3;

class test1
{
    int a;
    int b;
public:
    test1(int x=0,int y=0)
    {
        a = x;
        b = y;
    }
    void disp()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    friend test3 operator +(test1,test2);
};
class test2
{
    int a;
    int b;
public:
    test2(int x=0,int y=0)
    {
        a = x;
        b = y;
    }
    void disp()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    friend test3 operator +(test1,test2);
};

class test3
{
    int a;
    int b;
public:
    test3(int x=0,int y=0)
    {
        a = x;
        b = y;
    }
    void disp()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    friend test3 operator +(test1,test2);
};

test3 operator +(test1 t1,test2 t2)
{
    test3 temp;
    temp.a = t1.a + t2.a;
    temp.b = t1.b + t2.b;
    return temp;
}

int main(void)
{
    test1 t1(2,3);test2 t2(4,5);test3 t3;
    t3 = t1 + t2;
    t1.disp();
    t2.disp();
    t3.disp();

    return 0;
}
