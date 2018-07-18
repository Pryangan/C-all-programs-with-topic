#include<iostream>
using namespace std;

class student
{
private:
    int roll;
    char name[10];
public:
    void getdata()
    {
        cout<<"Enter roll : ";
        cin>>roll;
        cout<<"Enter name : ";
        cin>>name;
    }
    void setdata()
    {
        cout<<endl<<"Roll is "<<roll;
        cout<<endl<<"Name is "<<name;
    }
};

int main(void)
{
    student st;
    st.getdata();
    st.setdata();
    return 0;
}
