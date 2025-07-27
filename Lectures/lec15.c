#include<stdio.h>
int main()
{
    
for (int i = 1; i <= 5; i++)
{
    char k='A';
  for(int j=1;j<=i;j++)
  {
    
    printf("%c",k);
    k++;
  }
  printf("\n");
}

return 0;
}