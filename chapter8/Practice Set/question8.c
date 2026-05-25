/*Write a program to count the occurrence of a given character in a string.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int cnt(char * str, char n);
int cnt(char * str, char n){
    int i, j=0;
    for ( i = 0; str[i]!='\0'; i++)
    {
        if (str[i]==n)
        {
            j++;
        }
        
    }
    return j;
}

int main(){
    char str[99];
    char n;
    printf("Enter the string: ");
    gets(str);

    printf("Which elemnt do you want to count: ");
    scanf("%c", &n);

    printf("The number of time the character %c occurs in the string is: %d,", n, cnt(str, n));
    return 0;

}