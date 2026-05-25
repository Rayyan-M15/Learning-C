/*Write a program to read a text file character by character and write its content twice in separate file. */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <math.h>

int main()
{
    FILE *ptr1;
    ptr1 = fopen("ques3og.txt", "r");
    
    FILE *ptr2;
    ptr2 = fopen("ques3copy.txt", "w");
    
    char ch;
    
    if (ptr1 == NULL || ptr2 == NULL)
    {
        printf("Error Opening File(s)");
    }
    
    while ((ch = fgetc(ptr1)) != EOF)
    {
        fputc(ch, ptr2);
    }

    
    fclose(ptr1);//closed to reopen later
    fputc('\n', ptr2);
    fputc('\n', ptr2);
    
    ptr1 = fopen("ques3og.txt", "r");//reopened in order to get the reading cursor back at start
    while ((ch = fgetc(ptr1)) != EOF)
    {
        fputc(ch, ptr2);
    }

    fclose(ptr1);
    fclose(ptr2);

    return 0;
}