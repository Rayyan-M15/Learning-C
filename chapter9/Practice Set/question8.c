/*Create a structure representing a bank account of a customer. What fields did you use and why?*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct acc{
    int accno;
    char name[30];
    char type[30];
    float balance;
};

int main(){
    struct acc account;

    printf("Enter Account Number Of The Customer: ");
    scanf("%d", &account.accno);

    printf("Enter Name Of The Customer: ");
    scanf("%s", &account.name);

    printf("Enter Account Type Of The Customer: ");
    scanf("%s", &account.type);

    printf("Enter Account Balance Of The Customer: ");
    scanf("%f", &account.balance);

    printf("\n");

    printf("------The Customer Details------\n");
    printf("Name: %s\n", account.name);
    printf("Account Number: %d\n", account.accno);
    printf("Account Type: %s\n", account.type);
    printf("Balance: %.2f\n", account.balance);

    return 0;

}