/* Write a program to determine whether a student has passed or failed. To pass, a
student requires a total of 40% and at least 33% in each subject. Assume there
are three subjects and take the marks as input from the user. */
#include <stdio.h>

int main()
{
    int sub1, sub2, sub3, maxmarks;
    float avg;

    printf("Enter the marks obtained in Subject 1: ");
    scanf("%d", &sub1);

    printf("Enter the marks obtained in Subject 2: ");
    scanf("%d", &sub2);

    printf("Enter the marks obtained in Subject 3: ");
    scanf("%d", &sub3);

    avg = (sub1 + sub2 + sub3) / 3.0;

    if (avg >= 40)
    {
        if(sub1>=33 && sub2>=33 && sub3>=33){
            printf("The student has passed.\nAverage score is %f.\n", avg);
        }

        else if (sub1<33 || sub2<33 || sub3<33){
            printf("The student has failed, scoring less than 33 percent in atleast one subject\n");
        }
    }
    else{
        printf("The student has failed, having less than 40 percent average.\nAverage score is %f.\n", avg);
    }

    return 0;
}