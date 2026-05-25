/*Quick Quiz: Write a show function to display the content of employee in an employee structure.*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

void show(struct employee e);
void show(struct employee e){
    printf("The employee code is: %d\nThe employee salary is: %.2f\nThe Employee name is: %s", e.code, e.salary, e.name);
}

int main(){
    struct employee e[3];
    for (int i = 0; i < 3; i++)
    {
        printf("Enter the employee code: ");
        scanf("%d", &e[i].code);
    
        printf("Enter the employee salary: ");
        scanf("%f", &e[i].salary);
    
        printf("Enter the employee name: ");
        scanf("%s", &e[i].name);

        printf("\n");
    }
    printf("\n\n-----Employee Details-----\n\n");
    for (int i = 0; i < 3; i++)
    {
        show(e[i]);
        printf("\n");
        printf("\n");
    }
    

    return 0;

    }