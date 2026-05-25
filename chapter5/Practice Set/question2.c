/*Write a function to convert Celsius temperature into Fahrenheit.*/
#include<stdio.h>
float c2f(float);
float c2f(float c){
    return (((c*9))/5)+32;
}
int main(){
    float c;
    printf("Enter the temperature in celcius: ");
    scanf("%f", &c);

    printf("The temperature in fahrenheit is: %.2f", c2f(c));
    return 0;

}