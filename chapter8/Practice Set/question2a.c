/*Write a program to take string as an input from the user using %c and %s confirm that the strings are equal.*/

//using %c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char str[99];
    printf("Enter a String: ");
    for (int i = 0; i < 99; i++)
    {
        scanf("%c", &str[i]);
    }
    
    return 0;
}