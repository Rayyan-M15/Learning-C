/*Write a program to print the value of a variable i by using “pointer to pointer” type of variable*/

#include <stdio.h>

int main()
{
    int i;
    int *j;
    int **k;
    j = &i;
    k = &j;

    printf("Enter the value of i: ");
    scanf("%d", &i);

    printf("The value of i is %d", **k);

    return 0;
}