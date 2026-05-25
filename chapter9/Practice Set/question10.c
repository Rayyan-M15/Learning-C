/*Solve problem 9 for time using ‘typedef’ keyword*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

typedef struct time{
    int hour;
    int minutes;
    int seconds;
}t;

void timecomp(t t1, t t2);
void timecomp(t t1, t t2){
    if (t1.hour>t2.hour)
    {
        printf("The First Time is Bigger");
    }

    else if (t1.hour<t2.hour)
    {
        printf("The Second Time is Bigger");
    }

    else if (t1.hour==t2.hour)
    {
        if (t1.minutes>t2.minutes)
        {
            printf("The First Time is Bigger");
        }
    
        else if (t1.minutes<t2.minutes)
        {
            printf("The Second Time is Bigger");
        }
    
        else if (t1.minutes==t2.minutes)
        {
            if (t1.seconds>t2.seconds){

                printf("The First Time is Bigger");
            }
        
            else if (t1.seconds<t2.seconds)
            {
                printf("The Second Time is Bigger");
            }
        
            else if (t1.seconds==t2.seconds)
            {
                printf("Both The Times Are Equal");
            }
        }
    }

}
    
    
    


int main(){
    t t1;
    t t2;
    printf("Enter Hour for Time No. 1: ");
    scanf("%d", &t1.hour);

    printf("Enter Minutes for Time No. 1: ");
    scanf("%d", &t1.minutes);

    printf("Enter Seconds for Time No. 1: ");
    scanf("%d", &t1.seconds);
    
    printf("\n");

    printf("Enter Hour for Time No. 2: ");
    scanf("%d", &t2.hour);

    printf("Enter Minutes for Time No. 2: ");
    scanf("%d", &t2.minutes);

    printf("Enter Seconds for Time No. 2: ");
    scanf("%d", &t2.seconds);

    printf("\n");
    
    timecomp(t1 , t2);
    return 0;

}