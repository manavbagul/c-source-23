////////////////////////////////////////////////////////////////////////////////
//
// Function Name : datatypes sizes
// Description : show data types sizes int float char double
// Input Arguments : null
// Output: text
// Author : Manav Jijabrao Bagul
// Date : 21/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
    printf("Following are sizes of data types\n");
    printf("char %5i\n", sizeof(char));
    printf("short %4zu\n", sizeof(short));
    printf("int %6zu\n", sizeof(int));
    printf("float %4i\n", sizeof(float));
    printf("double %3i\n", sizeof(double));
    printf("long %5i\n", sizeof(long));
    return 1;
}