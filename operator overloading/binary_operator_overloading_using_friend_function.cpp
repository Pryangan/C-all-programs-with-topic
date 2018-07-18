#include<iostream>
using namespace std;

class test
{
    int a;
    int b;
public:
    test(int x=0,int y=0)
    {
        a = x;
        b = y;
    }
    void disp()
    {
        cout<<a<<"\t"<<b<<endl;
    }
    friend test operator +(test,test);
};

test operator +(test t1,test t2)
{
    test temp;
    temp.a = t1.a + t2.a;
    temp.b = t1.b + t2.b;
    return temp;
}

int main(void)
{
    test t1(2,3),t2(4,5),t3;
    t3 = t1 + t2;
    t1.disp();
    t2.disp();
    t3.disp();

    return 0;
}
