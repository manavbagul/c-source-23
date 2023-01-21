////////////////////////////////////////////////////////////////////////////////
//
// Function Name : Student info
// Description : taking student details and printing it
// Input Arguments : Accept student info name, roll, course, city
// Output: show std info
// Author : Manav Jijabrao Bagul
// Date : 20/01/2023
//
////////////////////////////////////////////////////////////////////////////////



#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define stdcount 2

struct studentDetails
{
    char name[stdcount][30];
    int rollNumber[stdcount];
    char course[stdcount][20];
    char city[stdcount][20];
}std;

//fuction declaration
#pragma region 
void showStdInfo(void);
void clrScrWin(void);
void getStdInfo(void);
#pragma endregion
int main(void)
{
    getStdInfo();
    clrScrWin();
    showStdInfo();
    
    return 1;
}

void getStdInfo(void)
{
    int totalstd = 0;
    while (totalstd < stdcount)
    {
        printf("Enter Following Details of student %d\n",totalstd+1);
        printf("\tFull Name: ");
        scanf("%s", std.name[totalstd]);

        printf("\tRoll Number: ");
        scanf("%i", &std.rollNumber[totalstd]);

        printf("\tCourse: ");
        scanf("%s",std.course[totalstd]);

        printf("\tCity: ");
        scanf("%s",std.city[totalstd]);

        totalstd++;
    }
}

void showStdInfo(void)
{
    int totalstd = 0;
    
    while (totalstd < stdcount)
    {
        printf("\nStudent %d\n",totalstd+1);
        printf("\tFull Name: %s\n\tRoll Number: %i\n\tCourse: %s\n\tCity: %s", std.name[totalstd], std.rollNumber[totalstd], std.course[totalstd], std.city[totalstd]);
        
        totalstd++;
    }    

    printf("\n\n\nThanks For Using Our Management system")
}

void clrScrWin(void)
{
    up:
    printf("\nStudent details filling is done\nPress 'n' to clear screen and show Details");
    char n = getch();
    if ('N' == n|| 'n' == n)
        system ("cls");
    else
    {
        system ("cls");
        goto up;
    }
}