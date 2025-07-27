// palindrome
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
int st_palindrome(char s[50])
{
    char temp[50];
    strcpy(temp,s);
    strrev(temp);
    if (!strcmp(s,temp))
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}
int is_palindrome(int number)
{
    int rem, rev_num = 0, pow_10 = 0, temp = number;
    while (temp > 0)
    {
        rem = temp % 10;
        rev_num += (rem * pow(10, pow_10));
        temp /= 10;
        pow_10++;
    }
    if (number == rev_num)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    // int number;
    char s[50];
    printf("Enter input: ");
    fgets(s,50,stdin);
    s[strcspn(s, "\n")] = 0; // to replace unnecessary \n in the string with a terminator \0
    // printf("Enter the number: ");
    // scanf("%d",&number);
    if (st_palindrome(s))
    {
        printf("Given number is palindrome");
    }
    else
    {
        printf("Given number is not palindrome");
    }
    return 0;
}