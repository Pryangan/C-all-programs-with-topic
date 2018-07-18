#include<iostream>
using namespace std;

class test
{
    int a;
public:
    test();
    void disp();
};

test :: test()
{
    cout<<"Enter a number : ";
    cin>>a;
}

void test :: disp()
{
    cout<<"Number : "<<a;
}

int main(void)
{
    test t;

    t.disp();

    return 0;
}
