// Recursive Functions:

#include<stdio.h>
int factorial(int number)
{
if (number==1 || number==0)
{
   return 1;
}
else{
   return(number*factorial(number-1));
}
}
int main()
{
int num;
	printf("Enter a no. :");
	scanf("%d", &num);
printf("factorial of %d is %d\n",num,factorial(num));
return 0;
}

/* fact(5) = 5*fact(4)---->  
   fact(4) = 4*fact(3)---->
   fact(3) = 3*fact(2)---->
   fact(2) = 2*fact(1)---->
   fact(1) = 1("base case")  --->func do not get recur and return its value in main() function

*/