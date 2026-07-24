//Write a recursive function to calculate the sum of first 'n' natural numbers.

#include <stdio.h>

int sum_natural(int);

int sum_natural(int n){
    if(n == 1){
        return 1;
    }

    return sum_natural(n-1)+n;
}

int main(){
    printf("The sum of 5 fist natural number is %d",sum_natural);
    
    return 0;
}