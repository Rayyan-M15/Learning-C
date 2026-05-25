/*Write a program to check whether a given character is present in a string or not.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int search(char * str, char n);
int search(char * str, char n){
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

    printf("Which elemnt do you want to search: ");
    scanf(" %c", &n);

    if (search(str, n))
    {
        printf("Yes %c does exist in the string", n);
    }
    else{
        printf("No %c does not exist in the string", n);
    }
    
    return 0;

}