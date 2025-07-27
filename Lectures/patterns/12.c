// Hollow Inverted Full Pyramid Pattern

#include <stdio.h>
int main()
{
    int rows = 5;
    for (int i = rows; i >= 1; i--)
    {
        for (int space = rows; space > i; space--)
        {
            printf("  ");
        }
        
        for (int j = 1; j <= (2 * i) - 1; j++)
                     // j <= 2 * (rows - i) - 1
        {
            if (i == 1 || i == rows || j == 1 || j == (2 * i) - 1)
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}