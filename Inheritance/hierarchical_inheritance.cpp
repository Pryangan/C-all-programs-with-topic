#include<iostream>
using namespace std;

class Number
{
protected:
    int Num;
public:
    void get_Num(int x)
    {
        Num = x;
    }
};

class Square : public Number
{
protected:
    int sqr;
public:
    void disSquare()
    {
        sqr = Num*Num;
        cout<<"Square is "<<sqr<<endl;
    }
};

class Cube : public Number
{
    int cube;
public:
    void disCube()
    {
        cube = Num*Num*Num;
        cout<<endl<<"Cube is "<<cube;
    }
};

int main(void)
{
    Square s;
    s.get_Num(3);
    s.disSquare();

    Cube c;
    c.get_Num(4);
    c.disCube();

    return 0;
}
