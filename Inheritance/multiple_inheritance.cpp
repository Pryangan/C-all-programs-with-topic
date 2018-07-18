#include<iostream>
using namespace std;

class A
{
protected:
    int a;
public:
    void get_a(int x)
    {
        a = x;
    }
};

class B
{
protected:
    int b;
public:
    void get_b(int y)
    {
        b = y;
    }
};

class c : public A,public B
{
    int c;
public:
    void Add()
    {
        c = a+b;
        cout<<c;
    }
};

int main(void)
{
    c o;
    o.get_a(3);
    o.get_b(5);
    o.Add();

    return 0;
}
