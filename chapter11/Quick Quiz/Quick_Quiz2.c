/*Write a program to create an array of size n using calloc where n is an integer entered by the user.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int main(){
    int * ptr;
    int n;
    
    printf("Enter The Value Of n: ");
    scanf("%d", &n);

    ptr=(int*) calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        printf("Enter Value Of Integer %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("\nThe Entered Values Are\n");
    for (int i = 0; i < n; i++)
    {
        printf("Value Entered Of Integer %d is: %d\n", i+1, ptr[i]);
    }
    

    return 0;

}