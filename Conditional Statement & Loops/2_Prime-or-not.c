////////////////////////////////////////////////////////////////////////////////
//
// Function Name : prime or not
// Description : get input from user and tell it is prime or not
// Input Arguments : integer
// Output: text
// Author : Manav Jijabrao Bagul
// Date : 22/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main(int argc,int argv)
{
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n == 0 || n == 1)
    goto false;

    for (size_t i = 2; i <= n/2; i++)
    {
        if(n % i == 0)
        goto false;
    }

    if (1) 
    {
        true:
        printf("%d is a prime number\n",n);
    }
    else
    {
        false:
        printf("%d is not a prime number\n",n);
    }

    return 1;
}