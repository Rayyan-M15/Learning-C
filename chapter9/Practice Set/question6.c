/*Create an array of 5 complex numbers created in Problem 5 and display them with the help of a display function. The values must be taken as an input from the user*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct complexno{
    int real;
    int img;
};

void display(struct complexno *c);
void display(struct complexno *c){
    for (int i = 0; i < 5; i++)
    {
        printf("Complex No. %d: %d + %di\n", i+1, c[i].real, c[i].img);
    }
    
}

int main(){
    struct complexno c[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real value of complex equation %d: ", i+1);
        scanf("%d", &c[i].real);

        printf("Enter the imaginary value of complex equation %d: ", i+1);
        scanf("%d", &c[i].img);

        printf("\n");
    }
    
    display(c);
    return 0;

}