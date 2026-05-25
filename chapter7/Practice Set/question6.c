/*Write a program containing functions which counts the number of positive integers in an array.*/
#include <stdio.h>
int count(int *ptr, int n);
int count(int *ptr, int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (ptr[i] > 0)
        {
            j++;
        }
    }
    return j;
}

int main()
{
    int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("The number of positive elements in this array are: %d", count(ptr, n));
    return 0;
}