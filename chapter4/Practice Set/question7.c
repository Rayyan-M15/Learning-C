/*Write a program to calculate the sum of the numbers occurring in the multiplication table of 8. (consider 8 x 1 to 8 x 10).*/
#include<stdio.h>

int main(){
    int n=8, i, t=0;
    for (int i = 1; i <= 10; i++)
    {
        t+=n*i;
    }
    printf("The sum of all multiplications of the table of 8 upto 10 is: %d", t);
    return 0;

}