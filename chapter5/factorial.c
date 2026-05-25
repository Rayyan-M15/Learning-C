// This code is for finding the factorial of a user entered number. It uses recursion instead of loops.
#include <stdio.h>
int factorial(int x)
{
    if (x == 0 || x == 1)
    {
        return 1; // a program to calculate factorial using recursion
    }

    else if (x < 0)
    {
        printf("Factorial is not valid for negative numbers.\n");
        return -1;
    }

    else
    {
        return x * factorial(x - 1);
    }
}
int main()
{
    int c, x;
    printf("Enter the value of x: ");
    scanf("%d", &x);
    c = factorial(x);
    if (c != -1)
    {
        printf("The factorial of %d is %d.", x, c);
    }
    return 0;
}