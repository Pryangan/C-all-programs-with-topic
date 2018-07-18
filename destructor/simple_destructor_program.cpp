#include<iostream>
using namespace std;

class test
{
    static int counter;
public:
    test()
    {
        cout<<++counter<<" obj is Created"<<endl;
    }
    ~test() // no parameter list always
    {
        cout<<counter--<<" obj is destroyed"<<endl;
    }
};

int test :: counter;

int main(void)
{
    cout<<"Inside Main"<<endl;
    test t;
    {
        cout<<"inside Bracket"<<endl;
        test t1,t2;
        cout<<"After bracket"<<endl;
    }
    cout<<"outside main"<<endl;

    return 0;
}
