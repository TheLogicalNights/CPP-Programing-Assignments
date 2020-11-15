/*
    Problem Statement : Write a program which accept number from user and print even factors of that
                        number.

                        Input : 36
                        Output: 2 6 12 18
*/

#include "Header.h"

int main()
{
    int iNo = 0;
    cout<<"Enter a number\n";
    cin>>iNo;

    Number nobj(iNo);
    nobj.EvenFactors();

    return 0;
}