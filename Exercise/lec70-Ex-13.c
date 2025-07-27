#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    if (argc != 4)
    {
        printf("Usage: ./calc <operation> <num1> <num2>\n");
        return 1;
    }
    printf("The operation is %s\n", argv[1]);
    float num1 = atof(argv[2]);
    float num2 = atof(argv[3]);
    const char *op = argv[1];
    if (!strcmp(op, "add"))
    {
        printf("Answer is %f", num1 + num2);
    }
    else if (!strcmp(op, "substract"))
    {
        printf("Answer is %f", num1 - num2);
    }
    else if (!strcmp(op, "multiply"))
    {
        printf("Answer is %f", num1 * num2);
    }
    else if (!strcmp(op, "divide"))
    {
        if (num2 == 0)
        {
            printf("Cannot divide by zero");
        }
        else
        {
            printf("Answer is %f", num1 / num2);
        }
    }
    else
    {
        printf("Invalid Operations");
    }

return 0;
}