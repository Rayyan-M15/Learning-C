// Write a program to read three integers from a file.

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    FILE *ptr;
    ptr = fopen("ques1.txt", "r");
    int num;
    if (ptr==NULL)
    {
        printf("The File Does Not Exist.");
    }
    
    for (int i = 0; i < 3; i++)
    {
        fscanf(ptr, "%d", &num);
        printf("The Value of Number %d: %d\n", i+1, num);
    }
    
    fclose(ptr);
    return 0;

}