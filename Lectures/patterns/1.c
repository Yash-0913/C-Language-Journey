// Right Half Pyramid Pattern in C

#include<stdio.h>
int main()
{
    int n;
    printf("Enter length of pattern: ");
    scanf("%d",&n);
   for (int i = 1; i <= n; i++)
   {
    for (int j = 0; j < i; j++)
    {
       printf("* ");
    }
    printf("\n");
   }
   
return 0;
}