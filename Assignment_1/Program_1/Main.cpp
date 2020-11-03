/*
    Problem Statement : write a program to divide two numbers
*/
#include "Header.h"

int main()
{
    int iNo1 = 0,iNo2 = 0;
    float fRet = 0;
    bool bRet = false;

    cout<<"Enter first number\n";
    cin>>iNo1;
    cout<<"Enter second number\n";
    cin>>iNo2;
    
    bRet = Divide(iNo1,iNo2,&fRet);

    if(bRet==false)
    {
        cout<<"Error : Unable to divide with 0\n";
    }
    else
    {
        cout<<"Division of "<<iNo1<<" and "<<iNo2<<" is "<<fRet<<"\n";
    }
    
}