#include<iostream>
using namespace std;

class A
{
    int a;
    int b;
public:
    A(int x,int y):b(x),a(y)    // This is initialization List---- jaise uper a aur b ko declare kiya gya he isehi yha list bhi work krega
    {
        cout<<"Constructor Run"<<endl;
    }
    void disp()
    {
        cout<<a<<endl<<b;
    }
};

int main(void)
{
    A ob(2,5);
    ob.disp();

    return 0;
}
