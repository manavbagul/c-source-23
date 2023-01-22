////////////////////////////////////////////////////////////////////////////////
//
// Function Name : divided by 5 and 7
// Description : is given number is dividable by 5 and 7 or not
// Input Arguments : integer
// Output: text
// Author : Manav Jijabrao Bagul
// Date : 22/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>

void divide();
int main()
{
    divide();
    return 1;
}

void divide(){
    int num;

    printf("Enter numbers: ");
    scanf("%d",&num);

    if(((num % 5) == 0) && ((num % 7) == 0)){
        printf("Dividable by 5 and 7\n");
    }
    else if(((num % 7) == 0)){
        printf("Dividable by 5 and 7\n");
    }
    else if(((num % 5) == 0)){
        printf("Dividable by 5 and 7\n");
    }
    else{
        printf("%d is not dividable by both", num);
    }
}