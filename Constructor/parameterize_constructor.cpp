#include<iostream>
using namespace std;

class test
{
    int a;
public:
    test(int);
    void disp();
};

void test::disp()
{
    cout<<"Number is "<<a;
}

test::test(int a)
{
    this->a = a;
}

int main(void)
{
    test t(5);
    t.disp();

    return 0;
}
