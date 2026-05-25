/*Write problem 5’s structure using ‘typedef’ keywords*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct complex{
    int real;
    int img;
}cmp;

int main(){
    int r, i;

    cmp comp;
    
    printf("Enter the real part: ");
    scanf("%d", &comp.real);

    printf("Enter the imaginary part: ");
    scanf("%d", &comp.img);

    printf("The complex number is: %d + %di", comp.real, comp.img);
    return 0;

}