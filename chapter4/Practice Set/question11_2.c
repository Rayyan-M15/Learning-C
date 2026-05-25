/*Implement 10 using other types of loops.*/
#include<stdio.h>

int main(){
    int num, i=2, prime=1;
    printf("Enter a number: ");
    scanf("%d", &num);
    do
    {
        if(num%i==0){
            prime=0;
        }

        i++;
    } while (i<num);
    
    if(prime){
        printf("The number is prime.");
    }

    else{
        printf("The number is not prime");
    }
    return 0;

}