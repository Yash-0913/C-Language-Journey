// #define has no data type → it's just text replacement.
// Preprocessor has no idea about C syntax, so use parentheses in expressions!
// Use const in modern C for safer typed constants.
// Platform/compiler flags	#define DEBUG, #define WINDOWS

#include <stdio.h>
#include "swap.c"                   // we can include any file in this file by using #include as this file gets pasted here so if any function get doubled it will get error (eg: main)
#define PI 3.14                     // it replaces any occurrences of PI in file and replace it with 3.14
#define max(a, b) ((a > b) ? a : b) // its a macro they are like functions but are more faster 

int main()
{
    int a, b;
    a = 5;
    b = 6;
    printf("Before Swapping: a: %d, b: %d\n", a, b);
    swap(&a, &b);
    printf("Before Swapping: a: %d, b: %d\n", a, b);
    printf("max is :%d\n", max(a, b));
    // printf("max is :%d\n", max(PI,max(a, b))); // this won't work as recursion in #define macros don't execute again after doing ones in that macro
    return 0;
}