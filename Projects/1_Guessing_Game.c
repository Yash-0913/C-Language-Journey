#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int Ran_no, counter = 0, number;
    char Name[35];
    printf("Let's play the guessing game\n");
    printf("Player Name: \n");
    gets(Name);
    srand(time(NULL));
    Ran_no = rand() % 100 + 1;
    // printf("%d ",Ran_no);
    do
    {
        counter++;
        printf("Guess the number between (1 to 100) or press 0 to give up: ");
        scanf("%d", &number);
        if (number == 0)
        {
            break;
        }
        if (Ran_no > number)
        {
            printf("Number is greater\n");
        }
        else if (Ran_no < number)
        {
            printf("Number is smaller\n");
        }
        else
        {
            printf("\nCongratulations!! You have guessed correct Number in %d attempts\n", counter);
            break;
        }
    } while (Ran_no != number);
    printf("Thanks for Playing.\nCreated by: Yash Wankhede");
    return 0;
}