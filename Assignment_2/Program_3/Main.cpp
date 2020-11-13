/*
    Problem Statement : Accept on number from user if number is less than 10 then print
                        “Hello” otherwise print “Demo”.
*/
#include "Header.h"

int main()
{
    cout<<"Enter a number\n";
    int iNo = 0;
    cin>>iNo;

    Demo dobj(iNo);
    dobj.ChkNumber();
}