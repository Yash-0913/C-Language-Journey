#include <stdio.h>

int main()
{  
    /* An function can be divided into its tokens as given below
    printf
    (
    "%lu",sizeof(int)
    ); */

    // To make program readable we write in compact mode

    printf("%lu\n",sizeof(int));
    double a=5.6285;
    printf("%ld",sizeof(a));
    char c='f';
    printf("\nsize of c is %ld", sizeof(c));
    return 0;
}