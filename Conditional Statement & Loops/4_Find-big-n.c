////////////////////////////////////////////////////////////////////////////////
//
// Function Name : find big number
// Description : to find big number from 2 numbers
// Input Arguments : integer, integer
// Output: integer
// Author : Manav Jijabrao Bagul
// Date : 22/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    int n, n2;

    printf("Enter a TWO Number: ");
    scanf("%d %d", &n, &n2);

    if(n > n2)
        printf("%d is greater then %d",n, n2);
    else if(n2 > n)
        printf("%d is greater then %d", n2, n);
    else
        printf("Both are equal",n, n2);
    
    return 1;
}