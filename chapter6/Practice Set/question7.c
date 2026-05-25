/*Try problem 3 using call by value and verify that it does not change the value of the said variable.*/

#include <stdio.h>
int tenx(int i);
int tenx(int i)
{
    printf("The value of i in tenx function is: %d \n", i);
    return i = i * 10;
}

int main()
{
    int i;

    printf("Enter the value of i: ");
    scanf("%d", &i);

    printf("The value of i in the main function is: %d \n", i);
    printf("The 10x value of i is: %d \n", tenx(i));
    return 0;
}