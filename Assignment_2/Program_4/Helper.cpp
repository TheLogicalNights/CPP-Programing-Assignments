#include "Header.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Parameters    : None
// Return Value  : None
// Description   : It is default constructor which is used to initialize the object
// Author        : Swapnil Ramesh Adhav
// Date          : 13 Nov 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Number::Number()
{
    this->iNo1 = 0;
    this->iNo2 = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Number
// Parameters    : Integer
// Return Value  : None
// Description   : It is parameterized constructor which is used to initialize the object
// Author        : Swapnil Ramesh Adhav
// Date          : 13 Nov 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Number::Number(int iNo1,int iNo2)
{
    this->iNo1 = iNo1;
    this->iNo2 = iNo2;
}

void Number::Display()
{
    int iCnt = 0;
    for(iCnt=0;iCnt<iNo2;iCnt++)
    {
        cout<<iNo1<<"\t";
    }
    cout<<"\n";
}