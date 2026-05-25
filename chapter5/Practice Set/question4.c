/*Write a program using recursion to calculate nth element of Fibonacci series.*/
#include<stdio.h>
// fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
int fibonacci(int);

int fibonacci(int n){
    if (n==0){
        return 0;
    }
    else if(n==1){
        return 1;
    }

    else{
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The nth element of fibonacci series is: %d", fibonacci(n));
    return 0;

}