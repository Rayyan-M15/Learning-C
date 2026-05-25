/*Repeat 8 using while loop.*/
#include<stdio.h>

int main(){
    int n,i=1,t=1;
    printf("Enter  the value of n: ");
    scanf("%d", &n);

    while (i<=n)
    {
        t*=i;
        i++;
    }
    printf("The factorial of %d is: %d", n, t);
    return 0;

}