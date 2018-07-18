#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
    char name[10];
    int roll;

    //---------------------------
    //  Write a File
    //---------------------------
    ofstream outf("Student");   // this is constructor we can open only one file with this
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Roll : ";
    cin>>roll;
    outf<<name<<endl;
    outf<<roll<<endl;
    outf.close();

    //---------------------------
    // Read a File
    //-----------------------------
    ifstream inf("Student");
    inf>>name;
    inf>>roll;
    cout<<"Name is "<<name;
    cout<<endl<<"Roll is "<<roll;
    inf.close();
    return 0;
}
