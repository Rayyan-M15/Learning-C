/*Write a program to create a dynamic array of 5 floats using malloc().*/
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
    

    return 0;

}