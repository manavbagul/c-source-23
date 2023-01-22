////////////////////////////////////////////////////////////////////////////////
//
// Function Name : greater then
// Description : determine which number is big from other
// Input Arguments : inegers
// Output: text
// Author : Manav Jijabrao Bagul
// Date : 21/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    int v1, v2;
    printf("enter 2 number: ");
    scanf("%d %d",&v1, &v2);

    printf("%d is Big",v1 > v2 ? v1 : v2 > v1 ? v2 : printf("Both are equal \n\n"));

    return 1;
}