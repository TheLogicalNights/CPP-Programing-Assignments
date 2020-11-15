/*
    Problem Statement : Accept one character from user and convert case of that character.

                        Input : a Output : A
                        Input : D Output : d
*/

#include "Header.h"

int main()
{
    char ch = '\0';
    cout<<"Enter a character\n";
    cin>>ch;

    Character cobj(ch);
    cobj.ConvertCase();
    cobj.DisplayChar();

    return 0;
}
