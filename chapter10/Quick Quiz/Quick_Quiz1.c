/*
FILE *ptr;
ptr = fopen("harry.txt", "r");
int num;
fscanf(ptr, "%d", &num); 
Quick Quiz: Modify the program above to check whether the file exists or not before opening the file.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    FILE * ptr;
    ptr = fopen("rayyan.txt", "r"); //in case of rayyan1.txt it will show that the file does not exist
    int num;
    if (ptr==NULL)
    {
        printf("This file does not exist");
    }
    else{

        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
        
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);

        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
        
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
        
        fscanf(ptr, "%d", &num);
        printf("%d\n", num);
    }

    fclose(ptr);
    return 0;

}
