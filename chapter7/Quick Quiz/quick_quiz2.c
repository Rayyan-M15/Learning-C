/*
Following operations can be performed on a pointer:
1. Addition of a number to a pointer.
2. Subtraction of a number from a pointer.
3. Subtraction of one pointer from another.
4. Comparison of two pointer variables.

Try these operations on another variable by creating pointers in a separate program. Demonstrate all the four operations.*/

#include<stdio.h>

int addnum2ptr( int * ptr, int n);
int addnum2ptr( int * ptr, int n){
    return *(ptr + n);
}


int subnum2ptr( int * ptr, int n);
int subnum2ptr( int * ptr, int n){
    return *(ptr-n);
}


int subptr2ptr( int * ptr1, int * ptr2);
int subptr2ptr( int * ptr1, int * ptr2){
    return ptr1- ptr2;
}


void compptr2ptr( int * ptr1, int * ptr2);
void compptr2ptr( int * ptr1, int * ptr2){
    if (ptr1>ptr2)
    {
        printf("ptr1> ptr2 (Higher memory location in array)");
    }
    else if (ptr1<ptr2)
    {
        printf("ptr1< ptr2 (Lower memory location in array)");
        
    }
    else{
        printf("ptr1=ptr2 (Equal memory location in array)");
    }
}


int main(){
    int arr[]={11,22,33,44,55,66,77,88,99};
    int *ptr1=&arr[3];
    int *ptr2=&arr[3];
    int n=2;

    printf("1. Addition of a number to pointer: %d\n", addnum2ptr(ptr1, n));
    printf("2. Subtraction of a number from a pointer: %d\n", subnum2ptr(ptr2, n));
    printf("3. Subtraction of a pointer from a pointer: %d\n", subptr2ptr(ptr2, ptr1));
    printf("4. Comparison of a pointer to pointer: ");
    compptr2ptr(ptr1, ptr2);
    return 0;

}

