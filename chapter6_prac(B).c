/*Write a program having a variable 'i'.
Print the address of i'i', Passthis variable
 to a function and print its address.
 Are this address Same. Why?*/

 #include <stdio.h>

 int showNumber(int*  n){
    printf("The value at n is %d\n", n);
    printf("The value at n is %d\n", *n);
    return 5;
 }
 
 int main(){
    
    int i = 2;
    int* n = &i;

    printf("Address of the i is %u\n", &i);
    showNumber(n);
    return 0;
 }