/*
    Problem Statement : Write a program which accept number from user and print even factors of that
                        number.

                        Input : 24
                        Output: 1 2 4 6 8 12
*/
#include "Header.h"

int main()
{
    int iNo = 0;
    cout<<"Enter a number\n";
    cin>>iNo;

    Number nobj(iNo);
    nobj.EvenFactors();
}