/*Write a program to find grade of a student given his marks based on below:
    90 – 100 => A
    80 – 90 => B
    70 – 80 => C
    60 – 70 => D
    50 – 60 => E
    <50 => F
*/
#include<stdio.h>

int main(){
    int marks;
    printf("Enter the marks scored by the student: ");
    scanf("%d", &marks);

    if(marks>=90 && marks<=100){
        printf("The students grade is A");
    }

    else if(marks>=80 && marks<90){
        printf("The students grad is B");
    }

    else if(marks>=70 && marks<80){
        printf("The students grad is C");
    }

    else if(marks>=60 && marks<70){
        printf("The students grad is D");
    }

    else if(marks>=50 && marks<60){
        printf("The students grad is E");
    }

    else if(marks<50){
        printf("The students grad is F");
    }

    else{
        printf("Error");
    }
    return 0;

}