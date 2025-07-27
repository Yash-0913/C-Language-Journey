// rock,paper,scissors

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <ctype.h>
const char *choiceToStr(int choice)
{
    if (choice == 1)
        return "Rock";
    if (choice == 2)
        return "Paper";
    if (choice == 3)
        return "Scissors";
    return "Invalid";
}
void rules()
{
    printf("***Rules: \n");
    printf("1. If player 1 plays rock and player 2 plays scissor then player 1 will win\n");
    printf("2. If player 1 plays scissor and player 2 plays paper then player 1 will win\n");
    printf("3. If player 1 plays rock and player 2 plays paper then player 2 will win\n");
    printf("4. If Both players plays the same then no one will win\n");
    printf("5. If Both players plays the same then no one will win and it will be a tie\n");
    printf("6. The game will be of 3 rounds and if a tie occurs then that round will be discarded\n\n");
    printf("7. a) Rock will be represented by 1\n   b) Paper will be represented by 2\n   c) Scissors will be represented by 3\n");
}
int random1()
{
    return rand() % 3;
}
int main()
{
    system("chcp 65001"); // Set UTF-8 encoding for Windows terminal
    srand(time(NULL));    // srand takes seed as a input is defined in stdlib.h (as time changes it will change everytime ) (time takes input in sec)
    char name[20];
    int choice;

    printf("*******Welcome to game of Rock,Paper,Scissors*******\n");
    rules();
    while (1)
    {
        int comp, player_counter = 0, computer_counter = 0;
        printf("Name of the Player: ");
        fgets(name, 10, stdin);
        name[strcspn(name, "\n")] = '\0';
        printf("Lets the game begin \n");
        for (int i = 0; i < 3; i++)
        {
            comp = random1() + 1;
            printf("\n🎲 Round %d:\n", i + 1);
            printf("%s, choose your choice: ", name);
            scanf("%d", &choice);
            getchar();
            if (choice < 1 || choice > 3)
            {
                printf("Invalid choice! Please enter 1 (Rock), 2 (Paper), or 3 (Scissors).\n\n");
                i--; // retry this round
                continue;
            }
            printf("%s's choice: %s\n", name, choiceToStr(choice));
            printf("Computer's choice: %s\n", choiceToStr(comp));
            if (choice == comp)
            {
                printf("Its a tie, Round discarded");
                i -= 1;
            }
            else if ((choice == 1 && comp == 3) || // Rock beats Scissors
                     (choice == 2 && comp == 1) || // Paper beats Rock
                     (choice == 3 && comp == 2))   // Scissors beats Paper
            {
                printf("%s wins", name);
                player_counter++;
            }
            else
            {
                printf("Computer wins");
                computer_counter++;
            }
            printf("\n");
        }
        printf("\n***** Results *****\n");
        printf("%s score      : %d\n", name, player_counter);
        printf("Computer score: %d\n", computer_counter);
        if (player_counter >= 2)
            printf("🎉 \033[1;32mCongratulations %s, you won the game!\033[0m\n", name);
        else
            printf("💻 \033[1;31mYou lost, better luck next time %s!\033[0m\n", name);
        char button;
        printf("\nEnter o to play again or x to close: ");
        scanf(" %c", &button);
        getchar();
        if (tolower(button) == 'x')
        {
            break;
        }
        printf("\n");
    }
    return 0;
}