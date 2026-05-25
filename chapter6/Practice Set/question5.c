/*Write a program using a function which calculates the sum and average of two numbers. Use pointers and print the values of sum and average in main().*/

#include <stdio.h>
int sum(int *ptr1, int *ptr2);
float avg(int *ptr1, int *ptr2);

int sum(int *ptr1, int *ptr2)
{
    return *ptr1 + *ptr2;
}

float avg(int *ptr1, int *ptr2)
{
    return (*ptr1 + *ptr2) / 2.0;
}

int main()
{
    int a, b;
    int *i = &a;
    int *j = &b;
    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("The sum of a and b is : %d\n", sum(i, j));
    printf("The average of a and b is : %.2f\n", avg(i, j));

    return 0;
}