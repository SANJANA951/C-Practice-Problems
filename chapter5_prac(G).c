/*Write program using function to print the following pattern (fist n lines)
*
***
*****
*/

#include <stdio.h>

int main(){
    int n = 8;
    for (int i = 5; i <n; i++){
        //this loop runs from 0 to 2
        //if  i = 0 ----> print 1 star
        //if  i = 1 ----> print 3 star
        //if i = 1 -----> print 5 star

        //This for loop print(2*i+1) stars
        for (int j = 0; j<2*i+1;j++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}