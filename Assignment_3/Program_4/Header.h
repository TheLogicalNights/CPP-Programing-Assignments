#include<iostream>
using namespace std;

class Character
{
    private:
        char ch;
    public:
        Character();
        Character(char);
        void ConvertCase();
        void DisplayChar();
};