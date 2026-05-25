/*Write a program with a structure representing a complex number.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct complex{
    int real;
    int img;
};

int main(){
    int r, i;

    struct complex comp;
    struct complex *ptr=&comp;
    
    printf("Enter the real part: ");
    scanf("%d", &ptr->real);

    printf("Enter the imaginary part: ");
    scanf("%d", &ptr->img);

    printf("The complex number is: %d + %di", ptr->real,ptr->img);
    return 0;

}