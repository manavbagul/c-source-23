////////////////////////////////////////////////////////////////////////////////
//
// Function Name : arithmetic operator
// Description : simple calculator application
// Input Arguments : 2 integer
// Output: integer/float
// Author : Manav Jijabrao Bagul
// Date : 21/01/2023
//
////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
int main()
{
     calculator();
    return 1;
}

void calculator(void)
{
    int value1,value2;
    char op;

    printf("\\* Simple Calculator */\n");
    up:
    printf("Example:\n\t2 + 2\n\n\t");
    scanf("%d %c %d", &value1, &op, &value2);

    switch (op)
    {
    case '+':
        add(value1, value2);
        break;
    case '-':
        sub(value1, value2);
        break;
    case '*':
        mul(value1, value2);
        break;
    case '/':
        div(value1, value2);
        break;
    
    default:
        printf("Something went wrong\n\tTry Again!\n");
        goto up;
        break;
    }
    

    
}

void add(int v1,int v2)
{
    printf("\nAns = %d\n", v1 + v2);
}

void sub(int v1,int v2)
{
     printf("\nAns = %d\n", 1 - v2);
}

void mul(int v1,int v2)
{
    printf("\nAns = %d\n", v1 * v2);
}

void div(int v1,int v2)
{
    printf("\nAns = %d\n", v1 / v2);
}