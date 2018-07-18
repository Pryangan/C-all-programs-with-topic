#include<iostream>
using namespace std;

class person
{
    int age;
    char name[10];
    static int counter;
public:
    void getData(void);
    void setData(void);
    void displayTotal_Person();
};

int person::counter;

int main(void)
{
    person p1,p2;

    p1.getData();
    p1.displayTotal_Person();
    p2.getData();
    p2.displayTotal_Person();
    p1.setData();
    p2.setData();
    p1.displayTotal_Person();
    p2.displayTotal_Person();

    return 0;
}

void person :: getData()
{
    cout<<"Enter Age : ";
    cin>>age;
    cout<<"Enter Name : ";
    cin>>name;
    ++counter;
}

void person :: setData(void)
{
    cout<<endl<<"Age is "<<age<<endl<<"Name is "<<name<<endl;
}

void person :: displayTotal_Person(void)
{
    cout<<endl<<"Total number of person : "<<counter<<endl;
}
