/*Write a program containing a function which reverses the array passed to it.*/
#include <stdio.h>
void revarr(int *ptr, int n);
void revarr(int *ptr, int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++) // n/2 is used because it is reversed by the time the loop runs for n/2 times.
                                    // if it ran for n times the it would be reversed twice which means it would be back to its original form
    {
        temp = ptr[i];
        ptr[i] = ptr[n - i - 1]; //"n-i-1" it takes the ith element from the back and puts it in the front i th position
        ptr[n - i - 1] = temp;
    }
}

int main()
{
    int n;
    printf("How many elements do you want to enter: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = &arr[0];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The finshed array is: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }

    printf("\n");
    revarr(ptr, n);
    printf("The reveresed array is: ");
    for (int j = 0; j < n; j++)
    {
        printf("%d ", arr[j]);
    }
    return 0;
}