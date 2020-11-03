/*
    Problem Statement : Accept one number and check whether is is divisible by 5 or not.
*/
#include "Header.h"

int main()
{
    int iNo1 = 0;
    bool bRet = false;

    cout<<"Enter first number\n";
    cin>>iNo1;
    
    bRet = ChkDivisibleby5(iNo1);

    if(bRet==false)
    {
        cout<<"Number is not divisible by 5\n";
    }
    else
    {
        cout<<"Number is divisible by 5\n";
    }
    
}