#include<iostream>
using namespace std;

class test
{
    int a;
public:
    test();
    void disp();
    void geta(int a)
    {
        this->a = a;
    }
};

test ::test()
{
    cout<<"Welcome"<<endl;
}

void test :: disp()
{
    cout<<a;
}

int main(void)
{
    test t;
    t.geta(5);
    t.disp();

    test t1(t);

    t1.disp();

    return 0;
}
