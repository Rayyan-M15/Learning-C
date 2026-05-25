/*Write a program to convert Celsius (Centigrade degrees temperature to Fahrenheit).*/
#include<stdio.h>

int main(){
    float c, f;
    printf("Enter the value of temperature in centigrades(C): ");
    scanf("%f", &c);

    f=(c*9/5)+32;
    printf("The valuse of %.2f centigrade would be %.2f in fahrenheit.", c,f);
    return 0;

}