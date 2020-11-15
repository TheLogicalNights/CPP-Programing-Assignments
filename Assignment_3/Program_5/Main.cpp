/*
    Problem Statement : Accept on character from user and check whether that character is vowel
                        (a,e,i,o,u) or not.
                        
                        Input : E Output : TRUE
                        Input : d Output : FALSE
*/

#include "Header.h"

int main()
{
    char ch = '\0';
    bool bRet = false;

    cout<<"Enter a character\n";
    cin>>ch;

    Character cobj(ch);
    bRet = cobj.ChkVowel();

    if(bRet==true)
    {
        cout<<ch<<" is a vowel\n";
    }
    else
    {
        cout<<ch<<" is not a vowel\n";
    }
    
    return 0;
}