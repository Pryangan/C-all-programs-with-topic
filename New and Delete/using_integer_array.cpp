#include<iostream>
using namespace std;
int main (void)
{
    int *p = new int[5];

    for(int i=0;i<5;i++)
    {
        p[i] = i;
    }

    for(int i=0;i<5;i++)
    {
        cout<<endl<<*(p+i);
    }

    delete[] p;
    return 0;
}
