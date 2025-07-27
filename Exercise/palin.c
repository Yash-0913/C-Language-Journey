#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int is_palindrome(char *str, int len)
{
    int counter = 0;
    for (int i = 0; i < len / 2; i++)
    {
        if (tolower(str[i]) != tolower(str[len - i - 1]))
        {
            return 0;
        }
    }
        return 1;
}
int main()
{
    char *str=(char *)malloc(100 * sizeof(char));
    if (str == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    printf("Enter Input: ");
    fgets(str, 100, stdin); 
    str[strcspn(str, "\n")] = 0;

    if (is_palindrome(str, strlen(str)))
    {
        printf("Given number is palindrome");
    }
    else
    {
        printf("Given number is not palindrome");
    }
    free(str);
    return 0;
}