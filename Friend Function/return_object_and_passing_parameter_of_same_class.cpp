#include<iostream>
using namespace std;

class sum
{
    int a;
public:
    friend sum add(sum,sum);
    void getval(int);
    void display()
    {
        cout<<"value is "<<a<<endl;
    }
};

sum add(sum s1,sum s2)
{
    sum temp;
    temp.a = s1.a + s2.a;
    return temp;
}

void sum :: getval(int a)
{
    this->a = a;
}

int main(void)
{
    sum s1,s2;
    s1.getval(3);
    s2.getval(5);
    sum s3;
    s3 = add(s1,s2);
    s1.display();
    s2.display();
    s3.display();

    return 0;
}
