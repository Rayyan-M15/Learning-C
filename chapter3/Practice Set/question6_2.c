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

    if(num1>num2 && num1>num3 && num1>num4){
        printf("The grates number is: %d", num1);
    }

    else if(num2>num1 && num2>num3 && num2>num4){
        printf("The grates number is: %d", num2);
    }

    else if(num3>num2 && num3>num2 && num3>num4){
        printf("The grates number is: %d", num3);
    }

    else if(num4>num2 && num4>num3 && num4>num1){
        printf("The grates number is: %d", num4);
    }
    return 0;

}