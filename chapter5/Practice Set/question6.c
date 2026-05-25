/*Write a recursive function to calculate the sum of first ‘n’ natural numbers.*/
int natsum(int);

int natsum(int n)
{
    if (n == 0)
        return 0;
    return natsum(n - 1) + n;
}
#include <stdio.h>

int main()
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    if (n <= 0)
    {
        printf("Enter a natural number");
    }
    else
    {
        printf("The sum of first %d numbers is %d", n, natsum(n));
    }
    return 0;
}