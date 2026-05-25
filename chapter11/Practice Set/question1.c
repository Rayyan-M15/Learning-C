/*Write a program to dynamically create an array of size 6 capable of storing 6 integers.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int main(){
    int * arr;
    arr=(int *) malloc(6 * sizeof(int));

    if (arr==NULL)
    {
        printf("Memory allocation failed");
        return 1;
    }

    arr[0]= 23;
    arr[1]= 14;
    arr[2]= 345;
    arr[3]= 55;
    arr[4]= 632;
    arr[5]= 1;

    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Value Entered for Integer %d is: %d\n", i+1, arr[i]);
    }
    
    free(arr);
    return 0;

}