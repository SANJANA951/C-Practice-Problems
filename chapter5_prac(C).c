//Write a function to calculate for of affection on body of mass 'm' exerted by earth. consider = 9.8m/s2.

#include <stdio.h>

float force(float);

float force(float mass){
    return mass* 9.8;
}
int main(){

    int  m = 45;
    printf("The value of force is %f\n", force(m));
    
    return 0;
}