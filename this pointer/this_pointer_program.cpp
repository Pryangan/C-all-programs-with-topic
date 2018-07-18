#include<iostream>
using namespace std;

class Max
{
    int x;
public:
    Max(int x=0)
    {
        this->x = x;
    }
    Max & greaterM(Max &ob)
    {
        if(x>ob.x)
        {
            return *this;
        }
        else{
            return ob;
        }
    }
    void disp()
    {
        cout<<"value is "<<x<<endl;
    }
};

int main(void)
{
    Max ob(10),ob1(20),ob3;
    ob.disp();
    ob1.disp();
    ob3 = ob.greaterM(ob1);
    ob3.disp();

    return 0;
}
