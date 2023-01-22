////////////////////////////////////////////////////////////////////////////////
//
// Function Name : just find big number
// Description : just find big number from three number 
// Input Arguments : integer, integer, integer
// Output: text
// Author : Manav Jijabrao Bagul
// Date : 22/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    findBig();
    return 1;
}


void findBig()
{
    int a,b,c;

    printf("Enter 3 numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if(a>b && a>c){
        printf("a is big %d",a);
    }
    else if(b>a && b>c){
        printf("b is big %d",b);
    }
    else if (c>a && c>b){
        printf("c is big %d",c);

    }
}