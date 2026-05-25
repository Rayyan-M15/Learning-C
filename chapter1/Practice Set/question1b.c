/*Write a C program to calculate area of a rectangle:
    a. Using hard coded inputs.
    b. Using inputs supplied by the user.   */

#include <stdio.h>

int main()
{
    int l, b, a;
    printf("Enter the value of length: ");
    scanf("%d", &l);
    printf("Enter the value of breadth: ");
    scanf("%d", &b);

    a = l * b;

    printf("The area of a rectangle with length %d and breadth %d is %d", l, b, a);

    return 0;
}