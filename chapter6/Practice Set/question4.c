/*Write a function and pass the value by reference*/

int swapbyreference(int *x, int *y);
int swapbyreference(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;

    return 1;
}

#include <stdio.h>

int main()
{
    int a, b;
    int *i = &a;
    int *j = &b;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("The original value of a and b is %d and %d respectively.", a, b);
    swapbyreference(i, j);

    printf("The swapped value of a and b is %d and %d respectively.", a, b);
    return 0;
}