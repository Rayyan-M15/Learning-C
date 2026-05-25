/*Write a program to calculate the factorial of a given number using a for loop.*/
#include<stdio.h>

int main(){
    int n,t=1;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        t*=i;
    }
    printf("The factorial of %d is: %d", n, t);
    return 0;

}