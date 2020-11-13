/*
    Problem Statement : Accept number from user and check whether number is even or
                        odd.
*/

#include "Header.h"

int main()
{
    cout<<"Enter a number\n";
    int iNo = 0;
    cin>>iNo;

    Number nobj(iNo);
    bool bRet = nobj.ChkEvenOdd();

    if(bRet==true)
    {
        cout<<iNo<<" is even\n";
    }
    else
    {
        cout<<iNo<<" is odd\n";
    }
    
    return 0;
}