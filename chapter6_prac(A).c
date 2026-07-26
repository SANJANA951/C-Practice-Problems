/*Write a program yo print the address of a variable. Use this address to gest the value of variable*/

#include <stdio.h>

int main(){
    
    int i = 7;
    int* j = &i;

    printf("The address of the variable is %d\n", j);
    printf("value stored at that variable is %d\n", *j);
    return 0;
}