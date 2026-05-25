/*Write a program to print the address of a variable. Use this address to get the value of the variable.*/

#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    int *k;
    k = &a;
    printf("The value of the address of the variable a is: %p. \n", k);
    printf("The value of a is: %d", *k);
    return 0;
}