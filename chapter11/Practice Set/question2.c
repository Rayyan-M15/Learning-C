/*Use the array in problem 1 to store 6 integers entered by the user.*/
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
    

    for (int i = 0; i < 6; i++)
    {
        printf("Enter the value of integer %d: ", i+1);
        scanf("%d", &arr[i]);
    }

    printf("\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Value Entered for Integer %d is: %d\n", i+1, arr[i]);
    }
    
    free(arr);
    return 0;

}