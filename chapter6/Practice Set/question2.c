/*Write a program having a variable ‘i’. Print the address of ‘i’. Pass this variable to a function and print its address. Are these addresses same? Why?*/

#include <stdio.h>
int sample(int *ptr);
int sample(int *ptr)
{
    printf("The value of i is: %d (from sample function) \n.", *ptr);
    printf("The address of i is: %p (from sample function) \n.", ptr);
    return 1;
}
int main()
{
    int i;
    int *j = &i;
    printf("Enter the value of i: ");
    scanf("%d", &i);
    printf("The address of i is: %p (from main function)\n", j);

    sample(j);
    return 0;
}
// yes these addresses are same as even though we pass the value through the function it does nothing to change its address.
// Also we are indirectly accessing the variable i so both the functions deal with the same memory location.