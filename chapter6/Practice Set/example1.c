#include <stdio.h>

int main()
{
    int i = 8;
    int *j;
    j = &i;
    printf("add i= %p\n", &i);
    printf("add i= %p\n", j);
    printf("add j= %p\n", &j);
    printf("value i= %d\n", i);
    printf("value i= %d\n", *(&i));
    printf("value i= %d\n", *j);

    return 0;
}