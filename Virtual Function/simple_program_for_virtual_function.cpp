#include<iostream>
using namespace std;

class base
{
    public:
        void disp()
        {
            cout<<"\nBase Class Disp";
        }
        virtual void show()     // with the help of virtual keyword devired class's show function will be print
        {
            cout<<"\nBase Class show";
        }
};

class derived : public base
{
public:
    void disp()
    {
        cout<<"\nDerived Class disp";
    }
    void show()
    {
        cout<<"\nDerived Class show";
    }
};

int main(void)
{
    base *bs;
    derived dv;
    bs = &dv;

    bs->disp();
    bs->show();

    return 0;
}
