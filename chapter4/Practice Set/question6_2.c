/*Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.*/
#include<stdio.h>

int main(){
    int i=1, n=0;
    do
    {
        n+=i;
        i++;
    } while (i<=10);
    printf("The sum of first 10 natural numbers is %d", n);
    return 0;

}