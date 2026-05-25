/*Calculate the area of a circle and modify the same program to calculate the volume of a cylinder given its radius and height.*/
#include<stdio.h>

int main(){
    float r, h, v;
    printf("Enter the radius of the cylinder: ");
    scanf("%f", &r);
    printf("Enter the height of the cylinder: ");
    scanf("%f", &h);

    v=3.14*(r*r)*h;
    printf("The volume of a cylinder of radius %.2f and height of %.2f is %.2f unit cube.", r, h, v);
    return 0;

}