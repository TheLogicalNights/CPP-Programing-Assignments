#include "Header.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkDivisibleby5
// Parameters    : Integer
// Return Value  : boolean
// Description   : This function is used to check whether the number is divisible by 5 or not
// Author        : Swapnil Ramesh Adhav
// Date          : 3 Nov 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkDivisibleby5(int iNo1)
{
    if((iNo1%5)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}