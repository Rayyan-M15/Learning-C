/*Write a program to sum first ten natural numbers using while loop.*/
#include<stdio.h>

int main(){
    int i=1,n=0;
    while (i<=10)
    {
        n+=i;
        i++;
    }
    printf("The sum of the first 10 natural numbers is %d", n);
    return 0;

}
