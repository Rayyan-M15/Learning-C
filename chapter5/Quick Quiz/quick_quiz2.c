/*Use the library function to calculate the area of a square with side a.*/
#include<stdio.h>
#include<math.h>//math.h has a lot of basic and advanced math formulas.

int main(){
    float a;
    printf("Enter the value of side 'a': ");
    scanf("%f", &a);

    printf("The area of the square is %.2f. \n", pow(a,2));
    return 0;

}