/*Write a program to determine whether a character entered by the user is lowercase or not.*/
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z') {
        printf("The entered character is lowercase.\n");
    } else {
        printf("The entered character is not lowercase.\n");
    }

    return 0;
}
