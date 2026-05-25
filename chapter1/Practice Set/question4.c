/*Write a program to calculate simple interest for a set of values representing principal, number of years and rate of interest.*/
#include<stdio.h>

int main(){
    float t, p, i;
    int yr;
    printf("Enter the principal amount: ");
    scanf("%f",&p);

    printf("Enter the number of years: ");
    scanf("%d", &yr);

    printf("Enter the rate of interest(per annum): ");
    scanf("%f", &i);

    t=p+(p*i*yr)/100;

    printf("The total amount after simple interest at the principal amount of %.2f at the rate of %.2f per annum for %d years is %.2f.",p,i,yr,t);
    return 0;

}