/*Write a program to check whether a given number is prime or not using loops.*/
#include<stdio.h>

int main(){
    int num, isprime=1;
    printf("Enter a number: ");
    scanf("%d",&num);
    for (int i = 2; i < num; i++)
    {
        if(num%i==0){
            isprime=0;
        }
    }

    if (isprime)
    {
        printf("The number is prime.");
    }
    
    else{
        printf("The number is not prime.");
    }
    
    return 0;

}