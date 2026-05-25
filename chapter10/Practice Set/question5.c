/*Write a program to modify a file containing an integer to double its value.*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int main(){
    FILE * ptr;
    ptr= fopen("ques5og.txt", "r");
    int n;
    if (ptr==NULL)
    {
        printf("Error Opening File");
        return 1;
    }
    fscanf(ptr, "%d", &n);
    
    fclose(ptr);
    
    n*=2;
    ptr=fopen("ques5og.txt", "w");
    
    if (ptr==NULL)
    {
        printf("Error Opening File");
        return 1;
    }
    
    fprintf(ptr, "%d", n);

    fclose(ptr);
    printf("Value has been updated successfully.");

    

    return 0;

}