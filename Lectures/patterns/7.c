// 7. Rhombus Pattern in C

#include<stdio.h>
int main()
{
   int rows=5;
   for (int i = 0; i < rows; i++)
   {
    for (int j = rows; j > i+1; j--)
    {
      printf(" ");
    }
    for (int k = 0; k < rows; k++)
    {
        printf("* ");
    }
    printf("\n");
   }
   
return 0;
}