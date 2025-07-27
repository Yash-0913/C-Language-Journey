// 5. Inverted Left Half Pyramid Pattern in C

#include<stdio.h>
int main()
{
    int rows=5;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf("  ");
        }
        for (int k = rows,a=1; k >= i; k--,a++)
        {
            printf(" %d",a);
        }
        printf("\n");
    }
return 0;
}




// C program to print the inverted left half pyramid pattern 
// of stars 
// #include <stdio.h> 
// int main() 
// { 
//     int rows = 5; 
//     // first loop for printing all rows 
//     for (int i = 0; i < rows; i++)
//  { 
//         // first inner loop for printing white spaces 
//         for (int j = 0; j < 2 * i; j++) 
// { 
//             printf(" "); 
//         } 
  
//         // second inner loop for printing star * 
//         for (int k = 0; k < rows - i; k++) 
// { 
//             printf("* "); 
//         } 
//         printf("\n"); 
//     } 
  
//     return 0; 
// }