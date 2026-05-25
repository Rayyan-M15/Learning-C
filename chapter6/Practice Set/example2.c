#include <stdio.h>
void swap(int *a, int *b);

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 3;
    int y = 4;
    printf("The value of x is %d and the value of y is %d.\n", x, y);

    swap(&x, &y);

    printf("The new value of x is %d and the value of y is %d.\n", x, y);
    return 0;
}
// due to using the call by reference method we were able to change the value of the variables x and y from within the swap function