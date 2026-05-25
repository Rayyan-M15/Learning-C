/*What will the following line produce in a C program:
int a = 4;
printf("%d %d %d \n", a, ++a, a++);
*/



/*My answer:
This code will produce the following output: 4 5 5 (because first a will be printed then it will be incremented and then printed and lastly it will be printed and then incremented.)*/

/*Other answer: 6 6 4*/

//both answers are correct, here the output completely depends upon the evaluation order(left to right or right to left) of the compiler.
//If not defined the compiler decides its own evaluation order leading to differing outcomes.
 
#include<stdio.h>

int main(){
    printf("solved");
    return 0;

}