/*Write a program using function to print the following pattern (first n lines)
 *
 * * *
 * * * * *                                                                   */
#include <stdio.h>

int main()
{
    int n, j, i;
    printf("Enter the number of lines: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) // The first loop is for the number of lines it should print
    {
        for (int j = 0; j < 2 * i + 1; j++) // The second loop is for the number of stars to be printed.
        {                                   // As in this cas each line had odd number of stars we used the mathematical formula 2n+1
            printf("*");
        }

        printf("\n");
    }
    return 0;
}