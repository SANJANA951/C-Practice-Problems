/*Write a program to calculate sum of the number occuring in the 
multiplication 8*/

#include <stdio.h>

int main(){
    int  sum = 0;
    for (int  i=1; i<= 10; i++)
    {
       sum += (8*i);
    }
    printf("The sum of the table 8 is %d",sum);
    
    return 0;
}