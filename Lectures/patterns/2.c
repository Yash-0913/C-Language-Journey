// c program to print left half pyramid pattern of numbers

#include <stdio.h>
int main()
{
    int rows=5;
    // loop1: to print the rows
    for (int i = rows; i > 0; i--)
    {
        // loop2: to print space
        for (int j = 1; j < i; j++)
        {
            printf("  ");
        }
        // for (int j = 1; j <= i*2-2; j++)
        // {
        //     printf(" ");
        // }
          // loop3: to print numbers
        for (int k = rows,a=1; k >= i; k--,a++)
        {
            printf(" %d",a);
        }
        printf("\n");
    }
    return 0;
}

// #include <stdio.h>
// int main()
// {
//     int rows=10;
//     // loop1: to print the rows
//     for (int i = 1; i <=rows; i++)
//     {
//         // loop2: to print space
//         for (int j = rows; j > i;j--)
//         {
//             printf("  ");
//         }
//         for (int k = i; k >=1;k--)
//         {
//             printf(" *");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// #include <stdio.h>

// int main()
// {
//     int rows = 5;

//     // first loop is for printing the rows
//     for (int i = 0; i < rows; i++) {

//         // loop for printing leading whitespaces
//         for (int j = 0; j < 2 * (rows - i) - 1; j++) {
//             printf(" ");
//         }

//         // loop for printing * character
//         for (int k = 0; k <= i; k++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }