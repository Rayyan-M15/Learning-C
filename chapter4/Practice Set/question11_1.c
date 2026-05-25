/*Implement 10 using other types of loops.*/
#include<stdio.h>

int main(){
    int num, prime=1, i=2;
    printf("Enter a number: ");
    scanf("%d", &num);

    while (i<num)
    {
        if (num%i==0)
        {
            prime=0;
        }
        i++;
        
    }
    if (prime)
    {
        printf("The number is prime");
    }
    else{
        printf("The number is not prime");
    }
    
    return 0;

}