/* Create an array of multiplication table of 7 upto 10 (7 x 10 = 70). Use realloc to make it store 15 number (from 7 x 1 to 7 x 15). */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int main(){
    int * arr;
    arr=(int *)malloc(10*sizeof(int));

    for (int i = 0; i < 10; i++)
    {
        arr[i]= 7*(i+1);
        printf("7 x %d = %d\n", i+1, arr[i]);
    }
    
    arr= realloc(arr, 15*sizeof(int));

    for (int i = 10; i < 15; i++)
    {
        arr[i]= 7*(i+1);
        printf("7 x %d = %d\n", i+1, arr[i]);
    }
    
    return 0;

}