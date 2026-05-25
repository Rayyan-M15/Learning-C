/*Write a program to illustrate the use of arrow operator -> in C.*/

/*Example: creating a two-dimensional vector using structures in C and using -> operator.*/
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
    struct vector *ptr=&v;      //arrow operator can only be used with the pointers.
    printf("Enter i cap: ");
    scanf("%d", & ptr->i);

    printf("Enter j cap: ");
    scanf("%d", & ptr->j );

    printf("The Vector is: %d i + %d j", ptr->i, ptr->j );

    return 0;

}