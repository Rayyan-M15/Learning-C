/*Write a program to implement program 5 using ‘for’ and ‘do-while’ loop.*/

// Using a for loop
#include<stdio.h>

int main(){
    int i, n=0;
    for (i = 1; i <= 10; i++)
    {
        n+=i;
    }
    printf("The sum of the first 10 natural numbers is %d", n);
    return 0;

}