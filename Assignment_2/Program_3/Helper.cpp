#include "Header.h"

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Demo 
// Parameters    : None 
// Return Value  : None
// Description   : It is default costructor which is used to initialize the object
// Author        : Swapnil Ramesh Adhav
// Date          : 13 Nov 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Demo::Demo()
{
    this->iNo = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Demo 
// Parameters    : Integer 
// Return Value  : None
// Description   : It is parameterized costructor which is used to initialize the object
// Author        : Swapnil Ramesh Adhav
// Date          : 13 Nov 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

Demo::Demo(int iNo)
{
    this->iNo = iNo;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ChkNumber 
// Parameters    : None 
// Return Value  : None
// Description   : It is simple function which checks number is less than 10 or not
// Author        : Swapnil Ramesh Adhav
// Date          : 13 Nov 2020
//
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Demo::ChkNumber()
{
    if(iNo<10)
    {
        cout<<"Hello\n";
    }
    else
    {
        cout<<"Demo\n";
    }
    
}