// 3. Full Pyramid Pattern in C of alphabets

#include <stdio.h>
int main()
{
    char a;
    int rows = 5;
    // loop1: to print the rows
    for (int i = 1; i <= rows; i++)
    {
        // loop2: to print space
        for (int j = rows; j > i; j--)
        {
            printf("  ");
        }
        // loop3: to print Alphabets
        for (int k = 1, a = 'A'; k <= 2 * i - 1; k++, a++)
        {
            printf(" %c", a);
        }
        printf("\n");
    }
    return 0;
}
