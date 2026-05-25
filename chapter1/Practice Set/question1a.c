/*Write a C program to calculate area of a rectangle:
    a. Using hard coded inputs.
    b. Using inputs supplied by the user.   */
    
#include<stdio.h>

int main(){
    int l=10, b=3, area;
    area= l*b;
    printf("The area of a rectangle with length %d and breadth %d is %d", l, b, area);
    return 0;

}