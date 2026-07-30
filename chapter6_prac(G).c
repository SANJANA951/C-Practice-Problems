/*Try problem 3 using call by value and verify that it doen not change the value of the said variable*/

#include <stdio.h>

void change_ten_time(int);

void change_ten_time(int a){
        a = a * 10;
    }
int main(){
    int ptr = 40;
    printf("%d\n",ptr);
    change_ten_time(ptr);
    printf(" %d\n", ptr);
    
    return 0;
}