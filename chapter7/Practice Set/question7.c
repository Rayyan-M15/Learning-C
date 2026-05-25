/*Create an array of size 3 x 10 containing multiplication tables of the numbers 2,7 and 9 respectively.*/
#include <stdio.h>

int main()
{
    int arr[3][10];
    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = 2 * (i + 1);
        arr[1][i] = 7 * (i + 1);
        arr[2][i] = 9 * (i + 1);
    }

    printf("The multiplication table of 2: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("2 X %d = %d\n", i + 1, arr[0][i]);
    }

    printf("The multiplication table of 7: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("7 X %d = %d\n", i + 1, arr[1][i]);
    }

    printf("The multiplication table of 9: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("9 X %d = %d\n", i + 1, arr[2][i]);
    }

    return 0;
}