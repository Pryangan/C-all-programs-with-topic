#include<iostream>
using namespace std;
int main (void)
{
    int *p;
    p = new int;
    *p = 5;
    cout<<"p is "<<*p;
    delete p;

    return 0;
}
