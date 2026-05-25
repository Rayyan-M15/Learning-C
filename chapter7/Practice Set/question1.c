/*Create an array of 10 numbers. Verify using pointer arithmetic that (ptr+2) points to the third element where ptr is a pointer pointing to the first element of the array. */
#include <stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int *ptr = arr; // this automatically implies that the pointer is at the first element of the array
    printf("The third value in the arr is %d", *(ptr + 2));
}