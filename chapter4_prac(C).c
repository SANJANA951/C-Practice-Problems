//Write a program to sum first ten natural number using while loop

#include <stdio.h>

int main(){
    int  i = 1;
    int sum = 0;
    while(i<=10){
        sum +=i;
        i++;
    }
    printf("The sum of first 10 natural number is %d",sum);
    
    return 0;
}

//Write a program to implement problem 5 for and do-while loop

#include <stdio.h>

// int main(){
//     int  i = 1;
//     int sum = 0;
//     do{
//         sum += i;
//         i++;
//     }while{
//         printf("The sum of first 10 natural number is %d",sum);
//     }
    
//     return 0;
// }


//Using Fol loop
// int sum = 0;
// for(int  i = 1, i <=10, i++);
// {
//     sum += 1;
// }
// print("The sum of first 10 natural number is %d",sum);
// return 0;