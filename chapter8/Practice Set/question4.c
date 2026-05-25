/*Write a function slice() to slice a string. It should change the original string such that it is now the sliced string.
Take ‘m’ and ‘n’ as the start and ending position for slice.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

void slice(char * str, int m, int n);
void slice(char * str, int m, int n){
    int i=0;
    while ((m+i<n) && (str[m+i] != '\0'))
    {
        str[i]= str[m+i];
        i++;
    }
    str[i]='\0';
}

int main(){
    char str[100];
    int m, n;
    printf("Enter the string: ");
    gets(str);

    printf("Enter the starting index(m): ");
    scanf("%d", &m);

    printf("Enter the ending index(n): ");
    scanf("%d", &n);

    slice(str, m, n);

    printf("The sliced string is: %s", str);
    return 0;

}