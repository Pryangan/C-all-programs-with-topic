#include<iostream>
using namespace std;
#include<string.h>

class student
{
private:
    int roll;
    char name[10];
public:
    void getData(int,char []);
    void disp();
};
void student :: getData(int roll,char name[])
{
    this->roll = roll;
    strcpy(this->name,name);
}
void student :: disp()
{
    cout<<"Roll : "<<roll<<endl;
    cout<<"Name : "<<name<<endl;
}

int main(void)
{
    student st;
    student *st1;
    st1 = &st;
    st1->getData(11,"pran");
    (*st1).disp();

    //------------------------------------------------//

    student st2;
    st2.getData(12,"Raj");
    student *st3;
    st3 = &st2;
    st3->disp();

    //-----------------------------------------------//

    student s[2];
    student *s1;
    s1 = s;
    int roll;
    char name[10];
    for(int i = 0;i<2;i++)
    {
        cout<<endl<<"Enter Roll : ";
        cin>>roll;
        cout<<"Enter name : ";
        cin>>name;
        (s1+i)->getData(roll,name);
    }

    for(int i = 0;i<2;i++)
    {
        (*(s1+i)).disp();
    }

    return 0;
}
