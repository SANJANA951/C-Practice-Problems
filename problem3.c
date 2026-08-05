/*Write a program that reada a 5x5 array of integers and then print the row sum and column sum
Enter 1: 8 3 9 0 10
Enter 2: 3 5 17 1 1
Enter 3: 2 8 6 23 1
Enter 4: 15 7 3 2 9
Enter 5: 6 14 2 6 0

Row total = 30 27  40 36 28
Column total = 34 37 37 32 21*/

#include <stdio.h>

int main(){
    int a[5][5] = {
        {8 ,3 ,9 ,0 ,10},
        {3 ,5 ,17 ,1 ,1},
        {2 ,8 ,6 ,23 ,1},
        {15 ,7 ,3 ,2 ,9},
        {6 ,14 ,2 ,6 ,0}
    };
    int i, j;
    int sum = 0;
    //Row sum
    printf("Row total: ");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            sum += a[i][j];
        }
        printf(" %d", sum);
        sum = 0;
    }

     printf("\nColumn total: ");
    for(j = 0; j < 5; j++)
    {
        for(i = 0; i < 5; i++)
        {
            sum += a[i][j];
        }
        printf(" %d", sum);
        sum = 0;
    }
    return 0;
}