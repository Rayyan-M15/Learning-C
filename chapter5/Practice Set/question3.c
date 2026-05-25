/*Write a function to calculate force of attraction on a body of mass ‘m’ exerted by earth. Consider g = 9.8m/s2 .*/
#include<stdio.h>
float force(float);

float force(float m){
    return m*9.8;
}
int main(){
    float m;
    printf("Enter the mass of the body(in kg): ");
    scanf("%f", &m);

    printf("The force exerted by earth on the body of mass %.2f is %.2f.", m, force(m));
    return 0;

}