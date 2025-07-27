/* Exercise 1: 
Print multiplication table of a number entered by the user in pretty form

Example:

Input
Enter the number you want multiplication table of:
6

Output:
Table of 6:
6 X 1 = 6
6 X 2 = 12
.
.
6 X 10 = 60
*/

#include<stdio.h>
int main()
{
   int num,n,product,i;
   printf("Enter the number you want multiplication table of: ");
   scanf("%d",&num);
   printf("Enter the number till the multiplication table you need: ");
   scanf("%d",&n);
   for (int i = 1; i <= n; i++)
   {
    product=num*i;
    printf("%d x %d = %d\n",num,i,product);
   }
   
return 0;
}

// #include<stdio.h>
// int main() {
//     int a;
//     printf("Enter the number you want multiplication table of: ");
//     scanf("%d", &a); 
//     printf("Table of %d:\n",a);

//     printf("%d X 1 = %d\n", a, a*1);
//     printf("%d X 2 = %d\n", a, a*2);        
//     printf("%d X 3 = %d\n", a, a*3);
//     printf("%d X 4 = %d\n", a, a*4);
//     printf("%d X 5 = %d\n", a, a*5);
//     printf("%d X 6 = %d\n", a, a*6);
//     printf("%d X 7 = %d\n", a, a*7);
//     printf("%d X 8 = %d\n", a, a*8);
//     printf("%d X 9 = %d\n", a, a*9);
//     printf("%d X 10 = %d\n", a, a*10);

//     return 0;
// }
/*
#include<stdio.h>
int main()
{
  int a,i=1;
  printf("Enter the number you want multiplication table of: ");
  scanf("%d", &a);
  printf("Table of %d:\n",a);
  // printf("%d",a); printf(" X %d",i); printf(" = %d\n", a*i);
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);
  i+=1;
  printf("%d X %d = %d\n",a,i,a*i);

return 0;
}
*/