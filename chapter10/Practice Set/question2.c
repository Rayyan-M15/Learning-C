/*Write a program to generate multiplication table of a given number in text format. Make sure that the file is readable and well formatted*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(){
    FILE * multiply;
    multiply=fopen("ques2.txt" , "w");
    int num;

    printf("Enter the Number You Want the Multiplication Table Of: ");
    scanf("%d", &num);

    if (multiply==NULL)
    {
        printf("Error Opening the File");
    }
    

    for (int i = 1; i < 11; i++)
    {
        fprintf(multiply, "%d x %d = %d\n", num, i, num*i );
    }
    
    fclose(multiply);

    return 0;

}