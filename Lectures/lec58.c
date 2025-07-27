// C Preprocessor: it takes action before compilation 
// It’s a text-processing step that runs before compilation.
// Handles directives that begin with #, transforming your source code before the compiler sees it
/* Core Preprocessor Directives:
   1. #define: #define PI 3.14  #define SQUARE(x) ((x)*(x))
   2. #include
   and more 
*/

#include<stdio.h>
#include<stdlib.h>
# define square(x) ((x)*(x))
int main()
{
   int a=5;
   printf("Square is: %d\n",square(a));
   char b='a'; 
   printf("Square is: %d",square(b));
return 0;
}