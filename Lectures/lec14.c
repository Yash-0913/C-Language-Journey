// While loop tp find factorial of number

#include <stdio.h>
int main()
{

   while (1)
   {
      int fact = 1, num, i = 1;
      printf("Enter a Whole number or enter -1 to exit ");
      scanf("%d", &num);
      if (num == -1)
      {
         goto end;
      }
      if (num >= 0)
      {
         while (i <= num)
         {
            fact = fact * i;
            i++;
         }
         printf("Factorial is: %d\n", fact);
      }
      else
         printf("Invalid input! Please enter a whole number\n");
   }
end:
   return 0;
}