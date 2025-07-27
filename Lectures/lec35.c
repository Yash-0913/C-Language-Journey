// header file string.h

#include <stdio.h>
#include <string.h>
int main()
{
    char space[] = " ";
    char s1[] = "Yash";
    char s2[] = "Wankhede01";
    char s3[50];

    printf("Compare s1 and s2: %d\n", strcmp(s1, s2));
    /* it gives sometime diff bet^n ASCII values of corresponding characters or gives -ve value if
    ascii diff is less or positive if greater if both strings are equal then it gives 0*/
    
    printf("concatenate string s1 and s2 with space in bet^n: \n");
    puts(strcat(strcat(s1, space), s2));
    // when we combine two or more strings it stores other strings in the first string
    printf("New s1 is: %s\n", s1);

    printf("Reverse string s1: %s\n", strrev(s1));
    printf("Reverse string s2: %s\n", strrev(s2));
    printf("Again reversing string s1: %s\n", strrev(s1));

    strcpy(s3, s1);
    printf("The string s3 is: %s\n", s3);

    printf("\nCompare s1 and s3: %d\n", strcmp(s1, s3));

    int i, j, k = 0, p;
    for (i = 0, p = 1; i < strlen(s3); i++, p++)
    {
        for (j = 0; j < p; j++)
        {
            printf("%c ", s3[k]);
            k++;
        }
        i += j - 1;
        printf("\n");
    }

    return 0;
}