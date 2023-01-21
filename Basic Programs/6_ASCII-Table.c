////////////////////////////////////////////////////////////////////////////////
//
// Function Name : ascii table
// Description : printing ascii table charactor with there corresponding decimal
// Input Arguments : null
// Output: text
// Author : Manav Jijabrao Bagul
// Date : 21/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    unsigned char code = 0;

    while(code <= 127 )
    {
        printf("%3c = %3i\n", code, code);
        code++;
    }
    return 1;
}