/*Write your own version of strcpy function from <string.h>*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void mystrcpy(char * str1, char * str2 );
void mystrcpy(char * str1, char * str2 ){
    int i;
    for (i = 0; str1[i]!= '\0'; i++)
    {
        str2[i]=str1[i];
    }
    str2[i]='\0';
}

int main(){
    char str1[99];
    char str2[99];
    printf("Enter the string: ");
    gets(str1);
    mystrcpy(str1, str2);
    printf("The copied string is: %s", str2);
    return 0;

}