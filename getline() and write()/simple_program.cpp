#include<iostream>
using namespace std;

int main(void)
{
    char name[20];
    cout<<"Enter name : ";
    cin.getline(name,16);   //with the help of getline() we can get full string with space
    cout<<"\nName is ";
    cout.write(name,12);
    cout<<"\nAgain without write() name is "<<name;
    return 0;
}
