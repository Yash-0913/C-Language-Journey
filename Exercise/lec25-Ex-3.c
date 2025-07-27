  
      // Fibonacci series by loop and recursion

#include<stdio.h>
int fib_recursion(int n)
{
     if (n==1 || n==2)
        return n-1;
    else 
    return fib_recursion(n-1)+fib_recursion(n-2);
}
void fib_loop(int no)
{
    int a=0,b=1;
   for (int i = 0; i < no-2; i++)
   {
    b=a+b;
    a=b-a;
   }
   printf("The %dth no of fibonacci series is %d",no,a);
}
int main()
{
   int no;
   printf("Enter the nth term of fibonacci series you want to  print: ");
   scanf("%d",&no);
//    if (no==1)
//     printf("0");
//    else if (no==2)
//     printf("1");
//     else
//     {
//         fib_loop(no);
//     }
   printf("%d",fib_recursion(no));
return 0;
}

//  int sum=0, a=0,b=1;
// sum=a+b;
// a=b;
// b=sum;