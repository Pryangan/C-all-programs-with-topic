#include<iostream>
using namespace std;
int main (void)
{
    int x=5;
    int *p = new int(x);
    cout<<*p;
    delete p;
    return 0;
}
