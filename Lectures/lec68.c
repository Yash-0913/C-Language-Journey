// Command line arguments: It passes the arguments to main() functions from command prompt / terminal
// argc takes input no of inputs given by command line first input is by default name of the file (0th term) then it adds other file 
// argv stores all the given inputs in strings its an array of strings first is name of the file
// To pass arguments in terminal: filename argument1,argument2,etc.
#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    int sum = 0;
    printf("The value of argc is: %d\n", argc);
    for (int i = 0; i < argc; i++)
    {
        printf("This is argument no %d: %s\n", i, argv[i]);
    }
    for (int i = 1; i < argc; i++)
    {
        sum += atoi(argv[i]);
    }
    printf("Total is: %d", sum);

    return 0;
}
