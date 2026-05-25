/*Write a structure capable of storing date. Write a function to compare those dates*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct date
{
    int day;
    int month;
    int year;
};

void compdate(struct date *d1, struct date *d2);
void compdate(struct date *d1, struct date *d2)
{
    if (d1->year < d2->year)
    {
        printf("Second Date is Bigger");
    }

    else if (d1->year>d2->year)
    {
        printf("First Date Is Bigger");
    }

    else if (d1->year==d2->year)
    {
        if (d1->month>d2->month)
        {
            printf("First Date is Bigger");
        }

        else if (d1->month<d2->month)
        {
            printf("Second Date is Bigger");
        }
        
        else if(d1->month==d2->month){
            if (d1->day>d2->day)
            {
                printf("The First Date is Bigger");
            }

            else if (d1->day<d2->day)
            {
                printf("The Second Date is Bigger");
            }

            else{
                printf("Both The Date Are Equal");
            }
            
            
        }
        
    }
    
    
}

int main()
{
    struct date date1;
    struct date date2;
    struct date * d1=&date1;
    struct date * d2=&date2;

    printf("Enter Year for Date No. 1: ");
    scanf("%d", &d1->year);

    printf("Enter Month for Date No. 1: ");
    scanf("%d", &d1->month);

    printf("Enter Day for Date No. 1: ");
    scanf("%d", &d1->day);
    
    printf("\n");

    printf("Enter Year for Date No. 2: ");
    scanf("%d", &d2->year);

    printf("Enter Month for Date No. 2: ");
    scanf("%d", &d2->month);

    printf("Enter Day for Date No. 2: ");
    scanf("%d", &d2->day);

    printf("\n");
    
    compdate(d1 , d2);
    return 0;
}