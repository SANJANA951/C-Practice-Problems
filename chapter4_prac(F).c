//Write a program to calculate the factorial of given number using loop

#include <stdio.h>

int main(){
    int product=0;
    int n = 4;
    for (int i = 1; i <= 10; i++)
    {
       product += (8*i);
    }
    printf("The factorial id %d",product);
    return 0;
}


//Repest using while loop

// int i = 1;
// int product = 1;
// int n = 1;
// while(i<=10;)
// {
//     product += (8*i);
//     i++;
// }
// printf("The factorial is %d",product);