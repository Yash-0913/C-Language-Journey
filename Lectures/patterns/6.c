// 6. Inverted Full Pyramid Pattern in C

#include<stdio.h>
int main()
{
    int rows = 10;
    // loop1: to print the rows
    for (int i = rows; i >= 1; i--)
    {
        // loop2: to print space
        for (int j = rows; j > i; j--)
        {
            printf("  ");
        }
        // loop3: to print Alphabets
        for (int k = 1; k <= 2 * i - 1; k++)
        {
            printf(" *");
        }
        printf("\n");
    }
    return 0;
}