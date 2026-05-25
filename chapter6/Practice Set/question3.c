/*Write a program to change the value of a variable to ten times of its current value*/

#include <stdio.h>
int tenx(int *ptr);
int tenx(int *ptr)
{
    return *ptr = 10 * (*ptr);
}
int main()
{
    int i;
    int *j;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    j = &i;
    printf("The new value of i is: %d", tenx(j));
    return 0;
}