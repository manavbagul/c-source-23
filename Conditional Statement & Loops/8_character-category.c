////////////////////////////////////////////////////////////////////////////////
//
// Function Name : find character category
// Description : get a character from user and tell is it digit,character, special symbol
// Input Arguments : character
// Output: text
// Author : Manav Jijabrao Bagul
// Date : 22/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <conio.h>

void find();

int main()
{
    find();
    return 1;
}

void find()
{
    char ch;
    printf("press any key to continue ");
    ch = getche();

    if (ch >= 'a' && ch <= 'z'){
    printf("\n\tLowercase Alphabet\n");
    }
    else if (ch >= 'A' && ch <= 'Z'){
        printf("\n\tUppercase Alphabet\n");
    }
    else if (ch >= '0' && ch <= '9'){
        printf("\n\tDigit\n");
    }
    else{
        printf("\n\tSpecial Symbol\n");
    }
}