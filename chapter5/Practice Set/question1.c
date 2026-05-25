/*Write a program using function to find average of three numbers.*/
#include <stdio.h>
float average(float, float, float);

int main()
{
    float num1, num2, num3, avg;
    printf("Enter the value of num1: ");
    scanf("%f", &num1);

    printf("Enter the value of num2: ");
    scanf("%f", &num2);

    printf("Enter the value of num3: ");
    scanf("%f", &num3);

    avg = average(num1, num2, num3);
    printf("The average of %.2f, %.2f and %.2f is %.2f.", num1, num2, num3, avg);
    return 0;
}

float average(float num1, float num2, float num3)
{
    return (num1 + num2 + num3) / 3;
}