/*
    Problem Statement : Accept two numbers from user and display first number in second
                        number of times.
*/
#include "Header.h"

int main()
{
    int iNo1 = 0;
    int iNo2 = 0;
    cout<<"Enter first number\n";
    cin>>iNo1;
    cout<<"Enter second number\n";
    cin>>iNo2;

    Number nobj(iNo1,iNo2);
    nobj.Display();
}