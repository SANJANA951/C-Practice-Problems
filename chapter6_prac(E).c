/*Write a program using a function wgich calculate the sum and average of two numbers.
Use pointers and print the value of sum and avearge in main()*/
 
#include <stdio.h>
int* sum(int a, int b){
    int s = a+b;
    int * ptr = &s;
    printf("The sum is %d\n", s);
    return ptr;

}

float* average(int a, int b){
    float avg = (a+b)/2.0;
    float * ptr = &avg;
    printf("The average is %f\n", avg);
    return ptr;
}

int main(){

    int x = 4;
    int y = 7;
    int* ptr1;
    float* ptr2;
    
    ptr1 = sum(x,y);
    ptr2 = average(x,y);
    printf("The value of variable addres sumid %u and average is %u\n",ptr1,ptr2);
    return 0;
}