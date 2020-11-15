/*
    Program Statement : Write a program which accept one number from user and print that number of
                        even numbers on screen.
                        
                        Input : 7
                        Output: 2 4 6 8 10 12 14
*/

#include "Header.h"

int main()
{
    cout<<"Enter a number\n";
    int iNo = 0;
    cin>>iNo;

    Number nobj(iNo);
    nobj.PrintEven();
}