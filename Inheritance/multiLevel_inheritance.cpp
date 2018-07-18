#include<iostream>
using namespace std;

class student
{
    char name[10];
    int roll;

public:
    void setName()
    {
        cout<<"Enter name : ";
        cin>>name;
    }
    void setRoll()
    {
        cout<<"Enter roll";
        cin>>roll;
    }
    char* getName()
    {
        return name;
    }
    int getRoll()
    {
        return roll;
    }
};

class marks : public student
{
    int mark1;
    int mark2;
public:
    void setMark(int x,int y)
    {
        mark1 = x;
        mark2 = y;
    }
    int mark_1()
    {
        return mark1;
    }
    int mark_2()
    {
        return mark2;
    }
};

class total : public marks
{
    int total;
public:
    void dispDetails()
    {
        cout<<endl<<"Name is "<<getName();
        cout<<endl<<"Roll is "<<getRoll();
        cout<<endl<<"Mark 1 is "<<mark_1()<<endl<<"Mark 2 is "<<mark_2();
        cout<<endl<<"Total is "<<mark_1() + mark_2();
    }
};

int main(void)
{
    total t;
    t.setName();
    t.setRoll();
    t.setMark(34,45);
    t.dispDetails();

    return 0;
}
