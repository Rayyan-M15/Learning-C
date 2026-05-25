/*Write a program to create an array of 10 integers and store multiplication table of 5 in it.*/
#include <stdio.h>

int main()
{
    int arr[10];
    int j = 1;
    for (int i = 0; i < 10; i++)
    {
        arr[i] = 5 * j;
        printf("5 X %d = %d \n", j, arr[i]);
        j++;
    }

    return 0;
}