// Storage Variables 
/* 1. Automatic variables (auto) - It is same as thr local variables scope-function, Default initial value-garbage, lifetime-till the end of function
   2. External Variables (they are global variable), extern keyboard: scope-program, Default initial value-0, lifetime-till the end of program
       extern keyboard used to tell compiler that this variable will be included in program later so the compiler doesn't give space to that variable,
       just tell that variable will be in the program (we can have variables from outer programs with include)
    */
#include<stdio.h>
// #include "x.c"  ---> this will include x file into this program if x has main function compiler will give error.
int static_var() // already discussed scope-function, Default initial value-0, lifetime-till the end of program
{
    static int stat = 59;
    stat++;
    return stat;
}
int func1(int a, int b)  // auto int b == int b
{
    extern int sum;
    // int sum;
    // sum = a+b;
    return sum;
}
int sum=343;
int main()
{
   // declaration - Telling the compiler about the variable (No space reserved)
   // Definition - Declaration + space reservation
   int sum = func1(3,5);
   printf("%d\n",sum);
   printf("Static Variable value is: %d\n",static_var());
   printf("Static Variable value is: %d\n",static_var());
   printf("Static Variable value is: %d\n",static_var());
   register int r=5; // registor stores the variable in register of the cpu to run faster compiler has to cheak if registor is free to use
   printf("\nreg value r: %d",r);
return 0;
}