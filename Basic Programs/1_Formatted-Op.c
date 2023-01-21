////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Formatted Output
// Description : printing text in format like table
// Input Arguments : null
// Output: printing text
// Author : Manav Jijabrao Bagul
// Date : 20/01/2023
//
////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
int main()
{
    printf("%-4d %-8s 0%-2i %-3i %-4i %-3.2f\n",255, "AmiT", 9, 81, 150, 50.00);
    printf("0%-3d %-8s %-3i %-3i %-4i %-3.2f\n",2, "Sujata", 70, 80, 200, 66.67);
    printf("%-4d %-8s %-3i %-3i %-4i %-3.2f\n",150, "Ajay", 82, 18, 170, 56.67);
    return 1;
}

/*
2 5 5   A m i T         0 9  8 1    1 5 0   5 0 . 0 0
0 2     S u j a t a     7 0  8 0    2 0 0   6 6 . 6 7
1 5 0   A j a y         8 2  1 8    1 7 0   5 6 . 6 7
*/