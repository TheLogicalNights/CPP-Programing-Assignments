/*
    Problem Statement : Accept one number from user and print that number of * on screen.
*/

#include "Header.h"

int main()
{
    cout<<"Enter how many *'s do you want ?\n";
    int iNo = 0;
    cin>>iNo;

    Display dobj(iNo);
    dobj.DisplayPattern();

    return 0;
}