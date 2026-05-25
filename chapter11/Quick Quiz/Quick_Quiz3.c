/*Write a program to demonstrate the usage of free() with malloc().*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int main(){
    float * arr;
    int n;
    arr= (float *) malloc(5 * sizeof(float)) ;
    if (arr==NULL)
    {
        printf("Memory Allocation Failed");
        return 1;
    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("Enter Float No. %d: ", i+1);
        scanf("%f", &arr[i]);
    }

    printf("You Entered\n");
    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", arr[i]);
    }
    
    free(arr);
    return 0;

}