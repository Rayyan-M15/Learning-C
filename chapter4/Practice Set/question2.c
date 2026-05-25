/*Write a program to print multiplication table of 10 in reversed order.*/
#include<stdio.h>

int main(){
    int n=10;
    // printf("Enter the value of n: ");
    // scanf("%d", &n);

    for (int i = 10; i >= 1; i--)   // we could also write i instead of i>=1 as it would check if i is a non zero value before executing. hence it would be an automatic coundown.
    {
        printf("%d x %d = %d\n", n,i,n*i);
    }
    
    return 0;

}