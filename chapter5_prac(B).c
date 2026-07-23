//Write a function to conver Celcius temperature into Fahrenheit

#include <stdio.h>

float c2f(float c);

float c2f(float c){
    return (9*c)/5 + 32;

}
int main(){
    float c = 45;
    printf("Celcius to Fahrenhint of %F is %d", c, c2f(c));
    return 0;
}