#include<stdio.h>
int main()
{
        // Arithmetic operators:
    int a,b;
    a=36;
    b=5;
    printf("a + b = %d\n", a+b);
    printf("a - b = %d\n", a-b);
    printf("a * b = %d\n", a*b);
    printf("a / b = %d\n", a/b);
    printf("a % b = %d\n", a%b);   // %-Modulus Gives Remainder
    printf("\n");
      // Arithmetic operators for different data-types:
    int c; float d;
    c=108, d=5.4;
    printf("c + d = %f\n", c+d);
    printf("c - d = %f\n", c-d);
    printf("c * d = %f\n", c*d);
    printf("c / d = %f\n", c/d);
    printf("\n");
        // Logical operators:
    a=0,b=-15;
     printf("a && b = %d\n", a&&b);   // && - AND Operator
     printf("a || b = %d\n", a||b);   // || - OR Operator
     printf("!b = %d\n", !b);         // ! - NOT Operator
     printf("\n");
        // Bitwise Operators:
    a=8, b=3;
     printf("a & b : %d\n", a&b);   // & - Bitwise AND Operator
     printf("a | b : %d\n", a|b);   // | - Bitwise OR Operator
     printf("a^b : %d\n", a^b);     // ^ - Bitwise Exclusive(X)-OR Operator
     printf("~b : %d\n", ~b);       //~ - Bitwise complement Operator
     printf("a<<b : %d\n", a<<b);   // << - Bitwise Shift left Operator
     printf("a>>b : %d\n", a>>b);   // >> - Bitwise Shift Right Operator
     printf("\n");

      // Relational Operators:
    a=8, b=3;
     printf("a > b : %d\n", a>b);   // > - Greater than
     printf("a < b : %d\n", a<b);   // < - Less than
    a=4, b=4;
     printf("a>=b : %d\n", a>=b);   // >= - Greater than or equal to
     printf("a<=b : %d\n", a<=b);   // <= - Less than or equal to
     printf("a==b : %d\n", a==b);   // == - Is equal to
     printf("a!=b : %d\n", a!=b);   // != - Is not equal to
     printf("\n");

      // Assignment Operators:
    a=8, b=3;
    printf("a = %d\n" ,a);      
    printf("b = %d\n" ,b);      
    printf("a+=b : a =  %d\n" ,a+=b);  // a=a+b=8+3=11
    printf("a-=b : a =  %d\n" ,a-=b);  // a=a-b=11-3=8
    printf("b*=a : a =  %d\n" ,b*=a);  // b=b*a=3*8=24
    printf("a/=b : a =  %d\n" ,a/=b);  // a=a/b=8/24=0
    printf("\n");

    return 0;
}
