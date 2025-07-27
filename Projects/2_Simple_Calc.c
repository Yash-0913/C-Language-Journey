#include <stdio.h>
#include <math.h>
int main()
{
    float num1, num2;
    char option;
    while (1)
    {
        printf("----------------------------------\n");
        printf("Welcome to the simple calculator\n\n");
        printf("Choose an option from below: \n1. Add\n2. Subtract\n3. Multiply\n4. Divide\n5. Modulus\n6. Power\n7. Exit\n");
        printf("Now Enter your Choice: ");
        scanf(" %c", &option);
        printf("\n");
        if (option == '1' || option == '2' || option == '3' || option == '4' || option == '5')
        {
            printf("Enter the first Number: ");
            scanf(" %f", &num1);
            printf("Enter the second number: ");
            scanf(" %f", &num2);
        }
        else if (option == '6')
        {
            printf("Enter Number: ");
            scanf(" %f", &num1);
            printf("Enter Power: ");
            scanf(" %f", &num2);
        }
        else if (option == '7')
        {
            break;
        }
        printf("\n");
        switch (option)
        {
        case '1':
            printf("The Result of operation is: %.2f", num1 + num2);
            break;
        case '2':
            printf("The Result of operation is: %.2f", num1 - num2);
            break;
        case '3':
            printf("The Result of operation is: %.2f", num1 * num2);
            break;
        case '4':
            if (num2 == 0)
            {
                printf("Invalid Operation");
            }
            else
            {
                printf("The Result of operation is: %.2f", num1 / num2);
            }
            break;
        case '5':
            if (num2 == 0)
            {
                printf("Invalid Operation");
            }
            else
            {
                printf("The Result of operation is: %d", (int)num1 % (int)num2);
            }
            break;
        case '6':
            printf("The Result of operation is: %.2f", pow(num1, num2));
            break;

        default:
            printf("Invalid Option Selected");
            break;
        }
        printf("\n\n");
    }
    return 0;
}