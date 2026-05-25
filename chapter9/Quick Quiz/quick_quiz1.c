/*Quick Quiz: Write a program to store the details of 3 employees from user defined data. Use the structure declaring code(int), salary(float) and name(char[10])*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e[3];

    for (int i = 0; i < 3; i++)
    {
        printf("Enter the code for employee %d: ", i+1);
        scanf("%d", &e[i].code);

        printf("Enter the salary for employee %d: ", i+1);
        scanf("%f", &e[i].salary);

        printf("Enter the name for employee %d: ", i+1);
        scanf("%s", &e[i].name);
        printf("\n");
    }
    
    printf("\n Stored Data of Employees \n");

    for (int i = 0; i < 3; i++)
    {
        printf("The Name of Employee %d: %s\n", i+1, e[i].name);
        printf("The Code of Employee %d: %d\n", i+1, e[i].code);
        printf("The Salary of Employee %d: %.2f\n", i+1, e[i].salary);
        printf("\n");
    }
    

    return 0;

}