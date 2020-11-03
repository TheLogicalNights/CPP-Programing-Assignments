#include "Header.h"
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Divide
// Parameters    : Integer,Integer,Float *
// Return Value  : boolean
// Description   : This function is used to divide two numbers
// Author        : Swapnil Ramesh Adhav
// Date          : 3 Nov 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Divide(int iNo1,int iNo2,float *fRet)
{
    float fResult = 0.0;
    if(iNo2==0)
    {
        return false;
    }
    else
    {
        fResult = iNo1 / iNo2;
        *fRet = fResult;
        return true;
    }
}