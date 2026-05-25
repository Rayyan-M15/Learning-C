/*Write a program to find whether a year entered by the user is a leap year or not.
Take year as an input from the user*/

//a leap year is divisible by 4 but not 100 except when its divisble by 400.
#include <stdio.h>

int main()
{
    int yr;
    printf("Enter the year: ");
    scanf("%d", &yr);

    if ((yr % 4 == 0 && yr%100!=0) || yr%400==0)
    {
        printf("The year entered is a leap year\n");
    }

    else
    {
        printf("The year entered is not a leap year\n");
    }
    return 0;
}
