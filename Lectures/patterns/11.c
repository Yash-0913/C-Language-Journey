// Hollow Full Pyramid Pattern
#include <stdio.h>
int main()
{
    int rows = 10;
    for (int i = 1; i <= rows; i++)
    {
        for (int space = rows; space > i; space--)
        {
            printf("  ");
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            if (j == 1 || j == 2 * i - 1 || i == 1 || i == rows)
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