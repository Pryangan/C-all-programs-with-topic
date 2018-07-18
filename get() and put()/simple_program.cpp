#include<iostream>
using namespace std;

int main(void)
{
    char ch;
    int counter=0;
    cout<<"Enter a String : ";  //If we use cin then it will not print values after space or tab
    while(ch!='\n')
    {
        cin.get(ch);
        cout.put(ch);
        counter++;
    }
    cout<<"Number of Character is "<<counter;

    return 0;
}
