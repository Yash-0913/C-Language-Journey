/* Take input from the user and ask user to choose 0 for triangular star pattern and 1 for reversed triangular star pattern
Then print the pattern accordingly
*
**
***
**** -> Triangular star pattern


*****
****
***
**
* -> Reversed triangular star pattern

*/

#include <stdio.h>
void star(int n, int choice)
{
    int i, con;

    for (int i = 0; i < n; i++)
    {
        if (choice == 0)
            con = i;
        else
            con = n - 1 - i;
        for (int j = 0; j <= con; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
int main()
{
    int rows, choice;
    printf("Enter 0 for triangular star pattern and 1 for reversed triangular star pattern ");
    scanf("%d", &choice);
    if(choice==0|| choice==1)
    {
    printf("Enter no of lines of the star pattern ");
    scanf("%d", &rows);
    star(rows, choice);
    }
    else
    printf("Invalid option");
    return 0;
}