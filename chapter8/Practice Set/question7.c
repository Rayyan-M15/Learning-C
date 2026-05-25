/*Write a program to decrypt the string encrypted using encrypt function in problem 6.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void encrypt(char * str );
void encrypt(char * str ){
    int i;
    for (i = 0; str[i]!='\0'; i++)
    {
        str[i]-=1;
    }
    str[i]='\0';
}

int main(){
    char str[99];
    printf("Enter a string: ");
    gets(str);

    encrypt(str);

    printf("The decrypted string is: %s", str);
    return 0;

}