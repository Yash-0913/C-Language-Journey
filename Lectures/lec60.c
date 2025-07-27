// there are different preprocessors like include, define, undef, ifdef, ifndef, if, else, elif, pragma: to give special instructions to compiler
// there are predefined macros like __FILE__ or __DATE__(MMM DD YYYY),etc.
#include <stdio.h>
#define DEBUG

#define PI 3.14
void cheak_mac()
{
#ifdef DEBUG
    printf("Debug mode on\n");
#else
    printf("Release mode\n");
#endif
}
#undef DEBUG
void cheak_mac2()
{
#ifdef DEBUG
    printf("Debug mode on\n");
#else
    printf("Release mode\n");
#endif
}
void temp()
{
    printf("PI is: %f\n", PI);
}
int main()
{
    temp();
    cheak_mac();
    cheak_mac2();
    // predefined macros
    printf("File name is: %s\n", __FILE__);
    printf("Today date is: %s\n", __DATE__);
    printf("Current time is: %s\n", __TIME__);
    printf("LINE Number is: %d\n", __LINE__);
    if (__STDC__)
        printf("File is Compiled with ANSI");
    else
        printf("File is not Compiled with ANSI");
    return 0;
}