/*Write a program to check whether a number is divisible by 97 or not.*/
#include<stdio.h>

int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    if(num%97==0){
        printf("The number is divisible by 97");
    }

    else{
        printf("Then number is not divisble by 97");
    }
    return 0;

}