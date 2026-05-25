/*Quick Quiz: Write a program with three functions
    1. Good morning function which prints “good morning”.
    2. Good afternoon function which prints “good afternoon”.
    3. Good night function which prints “good night”.

    main() should call all of these in order 1→2→3

*/
#include<stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();
int main(){
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;

}

void goodmorning(){
    printf("Good Morning\n");
}
void goodafternoon(){
    printf("Good Afternoon\n");
}
void goodnight(){
    printf("Good Night\n");
}
