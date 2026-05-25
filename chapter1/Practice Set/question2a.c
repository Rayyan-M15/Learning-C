/*Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.*/
#include<stdio.h>

int main(){
    int r;
    float a;
    printf("Enter the radius of the circle: ");
    scanf("%d", &r);
    a=3.14*r*r;
    printf("The area of circle of radius %d is %.2f unit square.", r, a);
    return 0;

}