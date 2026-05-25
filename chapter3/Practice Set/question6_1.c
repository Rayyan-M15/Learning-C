/*Write a program to find greatest of four numbers entered by the user.*/
#include<stdio.h>

int main(){
    int num1, num2, num3, num4, max;
    printf("Enter Number 1: ");
    scanf("%d", &num1);
    printf("Enter Number 2: ");
    scanf("%d", &num2);
    printf("Enter Number 3: ");
    scanf("%d", &num3);
    printf("Enter Number 4: ");
    scanf("%d", &num4);

    max=num1;
    if(num2>max){
        max=num2;
    }

    if(num3>max){
        max=num3;
    }

    if(num4>max){
        max=num4;
    }

    printf("The highest number is: %d", max);

    return 0;

}