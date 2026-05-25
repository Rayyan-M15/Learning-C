/*Write your own version of strlen function from <string.h>*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
int stln(char *ptr);
int stln(char *ptr){
    int length=0;
    while (ptr[length]!= '\0')
    {
        length++;
    }
    return length;
    
}

int main(){
    char str[100];

    printf("Enter Your String: ");
    gets(str);

    printf("The length of the sring entered is: %d", stln(str));
    return 0;

}