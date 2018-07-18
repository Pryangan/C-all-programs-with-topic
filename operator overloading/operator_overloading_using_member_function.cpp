#include<iostream>
using namespace std;

class test
{
    int a;
public:
    test(int x)
    {
        a = x;
    }
    void disp()
    {
        cout<<a;
    }
    void operator -();
};

void test :: operator -()
{
    a = -a;
}
int main(void)
{
    test ob(5);
    -ob;
    ob.disp();
    return 0;
}
