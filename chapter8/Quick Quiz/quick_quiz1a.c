/*Create a string using double quotes and print its content using a loop.*/
#include<stdio.h>
#include <string.h>
int main(){
    char str[]="RAYYAN";
    for (int i = 0; i < strlen(str); i++)
    {
        printf("%c", str[i]);
    }
    
    return 0;

}