////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Swap 2 number
// Description : swapping two number without functional approach
// Input Arguments : null
// Output: printing text
// Author : Manav Jijabrao Bagul
// Date : 21/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    int i = 1,j = 0;

    printf("Before Processing \n\ti = %d\n\tj = %d\n", i, j);

    //Swapping Logic
    int t;
    t = i;
    i = j;
    j = t;

    printf("After Processing \n\ti = %d\n\tj = %d", i, j);
    return 1;
}