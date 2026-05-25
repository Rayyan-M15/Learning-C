/*Write a function ‘sumVector’ which returns the sum of two vectors passed to it. The vectors must be two–dimensional.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct vector
{
    int i;
    int j;
}vc;

vc sumvector(vc v1, vc v2);
vc sumvector(vc v1, vc v2)
{
    vc final;
    final.i= v1.i+v2.i;
    final.j=v1.j+v2.j;
    return final;
}

int main()
{
    vc v1;
    vc v2;
    vc final;
    
    printf("Enter the values of vector 1\n");
    
    printf("The value of i in vector 1: ");
    scanf("%d", &v1.i);
    
    printf("The value of j in vector 1: ");
    scanf("%d", &v1.j);
    
    printf("\n");    
    
    printf("Enter the values of vector 2\n");
    
    printf("The value of i in vector 2: ");
    scanf("%d", &v2.i);
    
    printf("The value of j in vector 2: ");
    scanf("%d", &v2.j);
    
    final= sumvector(v1,v2);
    printf("\n");    
    printf("The final vector is: %di + %dj", final.i, final.j);
    
    return 0;
}