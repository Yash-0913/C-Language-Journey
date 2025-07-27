//  Hollow Diamond Pattern

#include <stdio.h>
int main()
{
    int rows = 5;
    // first outer loop to iterator through each row
    for (int i = 0; i < 2 * rows - 1; i++)
    {
        int comp;
        // assigning values to the comparator according to 
        // the row number
        if (i < 5)
        {
            comp = rows - i;
        }
        else
        {
            comp = (i - rows) + 2;
        }
        // first inner loop to print leading whitespaces
        for (int space = 1; space < comp; space++)
        {
            printf("  ");
        }
        // second inner loop to print star * and inner 
        // whitespaces
        for (int j = rows; j >= 2 * comp - rows; j--)
        {
            if (i == 0 || j == rows || j == 2 * comp - rows)
            {
                printf(" *");
            }
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}

