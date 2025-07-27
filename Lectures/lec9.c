#include<stdio.h>
#define PI 3.14  // Defining PI as a constant

int main()
{
    // format Specifiers
    int a=40; float b=3.98;
    printf("Value of a is %d and Value of b is %8.4f\n",a,b);
    printf("%-8.2fThis is b\n",b);

    // Escape Sequence
    printf("\nInserts a newline.\n");
    printf("\nInserts a\t H-Tab.");
    printf("\nTo print backslash \\");  /*  Output - \  */
    printf("\nInserts a\b backspace.");
    printf("\nInserts a Alarm or Beep.\a");
    printf("\nInserts a\v V-tab.");
    printf("\n\'Inserts a single quote character.\'"); //Output - 'Inserts a single quote character'
    printf("\n\"Inserts a Double quote character.\"\n"); //Output - "Inserts a Double quote character"

    /* Constants (Cannot change for program or function)
    There are  two ways to define constants  
    1. #define Preprocessor  e.g. #define PI = 3.14
    2. by const keyboard  e.g. const float d = 5.36;
    */
    int c = 8;
    printf("\nc is %d",c);
    const float d = 7.333;
    // PI = 7.33; //cannot do this since PI is a constant
    // d = 7.22; //cannot do this since b is a constant
    c=15; // can do this since a is a variable
    printf("\nc is %d d is %f PI is %f",c,d,PI);

    return 0;
}

