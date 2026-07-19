//Write a program to check whether a given number is prime or not using loops


#include <stdio.h>

int main(){
    int n = 11;
    int prime  = 0;
    for (int i = 2; i < n; i++)
    {
        if (n%i==0 && n!=2){
            prime = 1;
            break;
        }
    }
    if(prime){
        printf("%d is not prime\n",n);
    }
    else{
        printf("%d is prime",n);
    }
    
    
    return 0;
}

//Implment 10 using other types of loop like while loop
