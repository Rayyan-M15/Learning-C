/*Repeat problem 3 for a general input provided by the user using scanf*/
#include <stdio.h>

int main()
{
    int arr[10];
    int n, j = 1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 0; i < 10; i++)
    {
        arr[i] = n * j;
        printf("%d X %d = %d \n", n, j, arr[i]);
        j++;
    }

    return 0;
}