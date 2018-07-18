#include<iostream>
using namespace std;

class student
{
    int roll;
    float marks;
public:
    void getdata(int roll,float marks);
    void putdata();
};

void student :: getdata(int roll,float marks)
{
    (*this).roll = roll;
    (*this).marks = marks;
}

void student :: putdata()
{
    cout<<endl<<roll;
    cout<<endl<<marks;
}

int main(void)
{
    student st;
    st.getdata(10,23.10);
    st.putdata();
    student st1;
    st1.getdata(12,34.12);
    st1.putdata();
    return 0;
}
