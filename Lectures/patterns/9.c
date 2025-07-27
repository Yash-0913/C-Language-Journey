// 9. Hourglass Pattern in C

#include<stdio.h>
int main()
{
   int rows=4;
   for (int i = 0; i < 2*rows-1; i++)
   {
    int temp;
        if (i<rows) 
             temp=rows-i;
        else
            temp=i+2-rows;
      for(int j=rows;j>temp ;j--)
      {
        printf("  ");
      }
      for (int k = rows; k <= 2*temp+rows-2; k++)
      {
        printf("* ");
      }
      printf("\n");
   }
return 0;
}