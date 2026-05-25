/*Create a two-dimensional vector using structures in C.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
struct vector{
    int i;
    int j;
};


int main(){
    struct vector v;

    printf("Enter i cap: ");
    scanf("%d", & v.i);

    printf("Enter j cap: ");
    scanf("%d", & v.j );

    printf("The Vector is: %d i + %d j", v.i, v.j );

    return 0;

}