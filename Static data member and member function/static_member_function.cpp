#include<iostream>
using namespace std;
void b()
{
    cout<<endl<<"b";
}
class person
{
    int age;
    char name[10];
    static int counter;
public:
    void getdata(void);
    void setdata();
    static void display_total_person();
};

int person :: counter;

class student
{
    static int no;
public:
    static void disp()
    {
        ++no;
        cout<<endl<<"number is "<<no<<endl;
    }
};

int student :: no;
int main(void)
{
    b();
    person::display_total_person();
    person p1,p2;

    person::display_total_person();
    p1.getdata();
    person::display_total_person();
    p2.getdata();
    person::display_total_person();
    p1.setdata();
    p2.setdata();

    person::display_total_person();

    return 0;
}

void person::getdata(void)
{
    cout<<"Enter age : ";
    cin>>age;
    cout<<"Enter name : ";
    cin>>name;
    ++counter;
}

void person::setdata()
{
    cout<<"Age is "<<age<<endl;
    cout<<"Name is "<<name;
}

void person::display_total_person()
{
    cout<<endl<<"Total person is "<<counter<<endl;
    student :: disp();
    b();
}
