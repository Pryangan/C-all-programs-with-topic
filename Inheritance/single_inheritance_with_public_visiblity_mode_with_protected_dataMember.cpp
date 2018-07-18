#include<iostream>
using namespace std;

class person
{
protected:
    char name[10];
    int age;
public:
    void getName();
    void getAge();
    //char* takeName();
   // int takeAge();     no need this functions because data members are in protected
    void disp();
};

void person :: getName()
{
    cout<<"Enter Name : ";
    cin>>name;
}
void person :: getAge()
{
    cout<<"Enter Age : ";
    cin>>age;
}

/**char* person :: takeName()
{
    return name;
}

int person :: takeAge()
{
    return age;
}**/
void person :: disp()
{
    cout<<endl<<"Name : "<<name;
    cout<<endl<<"Age : "<<age;
}
class student : public person
{
private:
    int roll;
    char school[10];
public:
    void getRoll();
    void getSchool();
    void disp();
};

void student :: getRoll()
{
    cout<<"Enter Roll : ";
    cin>>roll;
}

void student :: getSchool()
{
    cout<<"Enter School : ";
    cin>>school;
}

void student :: disp()
{
    cout<<endl<<"Name : "<<name;
    cout<<endl<<"Age : "<<age;
    cout<<endl<<"Roll : "<<roll;
    cout<<endl<<"School : "<<school;
}

int main(void)
{
    person p;
    p.getName();
    p.getAge();
    p.disp();

    student s;
    s.getName();
    s.getAge();
    s.getRoll();
    s.getSchool();
    s.disp();

    return 0;
}
