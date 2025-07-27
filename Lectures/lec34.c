#include <stdio.h>
void printstr(char str[])
{
    int i = 0;
    while (str[i] != '\0')
    {
        printf("%c", str[i]);
        i++;
    }
}
int main()
{
    //    char a[5]="hello";   this will create problem as there is no space for null character \0
    //    printf("%s",a);   it will give output but with garbage values  like this hello└ß░ ◄☻

    // char str[]={'y','a','s','h','\0'};
    // char str[] = "yash"; // when we use "" for strings compiler itself adds null char. at the end

    char str[40]; // max length of string will be 39 with onr null character

    // two ways to grt string
    /* 1. by scanf func.
    scanf("%s", &str); // can't put white spaces in string with this approach like input: this is string output: this */

    // 2.
    printf("getting string using inbuilt function from stdio\n");
    gets(str);

    printf("\nBy using custom function with concepts of arrays: ");
    printstr(str);

    printf("\nBy using printf function: %s", str);

    printf("\nBy using inbuilt function from stdio: ");
    puts(str);

    return 0;
}