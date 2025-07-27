// Break and continue statements in c

#include <stdio.h>
int main()
{
    int i, age;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your age\n");
        scanf("%d", &age);
        if (age > 25)
        {
            break;
        }
        if (age > 12)
        {
            continue;
        }
        printf("we have not come across any continue statements\n");
        printf("Harry is a good boy\n");
    }

    return 0;
}
