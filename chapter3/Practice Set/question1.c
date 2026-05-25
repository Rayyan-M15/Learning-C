//Find the output of the following code
#include <stdio.h>
int main(){

    int a = 10;
    if (a = 11)     //==
    {
        printf("I am 11");
    }

    else
    {
        printf("I am not 11");
    }
}

/*  The output will be "I am 11", this is because there is "=" sign instead of "==" in the if statement,
    due to which the compiler treats it as a true value and runs this command   */