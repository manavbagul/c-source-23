////////////////////////////////////////////////////////////////////////////////
//
// Function Name : even or odd
// Description : to check user given value is even or odd
// Input Arguments : integer
// Output: text
// Author : Manav Jijabrao Bagul
// Date : 22/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n % 2 ==0)
        printf("%d is Even Number", n);
    else
        printf("%d is Odd Number", n);
    return 1;
}