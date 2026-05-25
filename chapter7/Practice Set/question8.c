/*Repeat problem 7 for a custom input given by the user*/
#include <stdio.h>

int main()
{
    int arr[3][10];
    int num1, num2, num3;

    printf("Enter num1: ");
    scanf("%d", &num1);

    printf("Enter num2: ");
    scanf("%d", &num2);

    printf("Enter num3: ");
    scanf("%d", &num3);

    printf("\n");

    for (int i = 0; i < 10; i++)
    {
        arr[0][i] = num1 * (i + 1);
        arr[1][i] = num2 * (i + 1);
        arr[2][i] = num3 * (i + 1);
    }

    printf("The multiplication table of %d: \n", num1);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num1, i + 1, arr[0][i]);
    }
    printf("\n");

    printf("The multiplication table of %d: \n", num2);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num2, i + 1, arr[1][i]);
    }
    printf("\n");

    printf("The multiplication table of %d: \n", num3);
    for (int i = 0; i < 10; i++)
    {
        printf("%d X %d = %d\n", num3, i + 1, arr[2][i]);
    }
    printf("\n");

    return 0;
}