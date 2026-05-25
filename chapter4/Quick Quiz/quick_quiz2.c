/*Write a program to print first ‘n’ natural number using do-while loop.*/
#include <stdio.h>

int main()
{
    int n, i = 1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    do
    {
        printf("%d\n", i);
        i++;
    } while (i <= n);

    return 0;
}