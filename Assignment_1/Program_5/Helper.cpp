#include "Header.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Display
// Parameters    : Integer
// Return Value  : None
// Description   : It accepts one number as input and display that number of "*" one the screen
// Author        : Swapnil Ramesh Adhav
// Date          : 3 Nov 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCount = 0;
    for(iCount=0;iCount<iNo;iCount++)
    {
        cout<<"*\t";
    }
    cout<<"\n";
}