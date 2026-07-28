/*Write the program to change the value of variable to ten times of its current value*/

//Practice D is same
/*Write a function and pass the value by refrence*/

#include <stdio.h>

void change_ten_time(int*);

void change_ten_time(int* a){
        *a = *a * 10;
    }
int main(){
    int ptr = 40;
    printf("%d\n",ptr);
    change_ten_time(&ptr);
    printf(" %d\n", ptr);
    
    return 0;
}