#include<iostream>
#include<fstream>
using namespace std;

int main(void)
{
    int roll;
    char name[10];

    //----------------------------------

    ofstream outf;
    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Roll : ";
    cin>>roll;

    outf.open("Data"); //with the help of open function we can create and use multiple function
    outf<<name<<endl;
    outf<<roll<<endl;
    outf.close();

    //----------------------------------

    cout<<"Enter Name : ";
    cin>>name;
    cout<<"Enter Roll : ";
    cin>>roll;

    outf.open("Data_1.txt");
    outf<<name<<endl;
    outf<<roll<<endl;
    outf.close();

    //----------------------------
    ifstream inf;
    inf.open("Data");
    inf>>name;
    inf>>roll;
    inf.close();
    cout<<"Name is "<<name<<endl;
    cout<<"Roll is "<<roll<<endl;

    //---------------------------

    inf.open("Data_1.txt");
    inf>>name;
    inf>>roll;
    inf.close();
    cout<<"Name is "<<name<<endl;
    cout<<"Roll is "<<roll<<endl;
    //-----------------------------

    return 0;
}
