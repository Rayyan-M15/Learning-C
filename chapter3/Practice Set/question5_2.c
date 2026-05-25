/*Write a program to determine whether a character entered by the user is lowercase or not.*/
#include <stdio.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if (ch >= 97 && ch <= 122)      // Here 97 and 122 are the ASCII values of a and z respecticely.
    {
        printf("The character is lowercase");
    }

    else
    {
        printf("The character is not lowercase");
    }
    return 0;
}