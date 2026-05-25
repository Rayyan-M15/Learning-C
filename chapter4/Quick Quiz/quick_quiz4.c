/*Write a program to print ‘n’ natural numbers in reverse order using for loop.*/
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (i = 1; n >= i; n--)
    {
        printf("%d \n", n);
    }

    return 0;
}

// AI solution
//  #include <stdio.h>

// int main() {
//     int n;
//     printf("Enter the value of n: ");
//     scanf("%d", &n);

//     // Loop from n down to 1
//     for (int i = n; i >= 1; i--) {
//         printf("%d\n", i);
//     }

//     return 0;
// }