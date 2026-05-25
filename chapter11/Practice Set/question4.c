/*Create an array dynamically capable of storing 5 integers. Now use realloc so that it can now store 10 integers*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int main(){
    int * arr;
    arr= (int *) malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of integer %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nThe Old Array is\n");

    for (int i = 0; i < 5; i++)
    {
        printf("The entered value of integer %d is: %d\n", i+1, arr[i]);
    }
    
    arr=realloc(arr, 10*sizeof(int));

    for (int i = 5; i < 10; i++)
    {
        printf("Enter the value of integer %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    
    printf("\nThe New Array is\n");

    for (int i = 0; i < 10; i++)
    {
        printf("The entered value of integer %d is: %d\n", i+1, arr[i]);
    }

    free(arr);
    return 0;

}