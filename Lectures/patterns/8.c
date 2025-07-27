// Diamond Pattern in C

#include<stdio.h>
int main()
{
   int rows=10;
   for (int i = 0; i < 2*rows-1; i++)
   {
    int temp;
        if (i<rows) 
             temp=rows-i;
        else
            temp=i+2-rows;
      for(int j=1;j<temp ;j++)
      {
        printf("  ");
      }
      for (int k = rows; k >= 2*temp-rows; k--)
      {
        printf("* ");
      }
      printf("\n");
   }
   
return 0;
}