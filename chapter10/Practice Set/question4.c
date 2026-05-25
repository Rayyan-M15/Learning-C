/* Take name and salary of two employees as input from the user and write them to a text file in the following format:
i. Name1, 3300
ii. Name2, 7700
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
#include<math.h>

int main(){
    FILE * ptr;
    ptr= fopen("ques4.txt", "w");
    char name[50];
    int salary;

    if (ptr==NULL)
    {
        printf("Error Opening file");
        return 1;
    }
    
    for (int i = 0; i < 2; i++)
    {
        printf("Enter Employee No. %d Name: ", i+1);
        scanf("%s", &name[0]);

        printf("Enter Employee No. %d Salary: ", i+1);
        scanf("%d", &salary);

        fprintf(ptr, "%d. %s, %d\n", i+1, name, salary);
        
    
    }
    
    fclose(ptr);

    printf("Data Written Successfully");
    
    return 0;

}