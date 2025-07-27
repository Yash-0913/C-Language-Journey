// Functions In C

#include <stdio.h>
void print();
int sum(int a, int b);
// With arguments and without return value.
void print_star(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("* ");
    }
}
// Without arguments and with return value.
int take_number()
{
    int i;
    printf("Enter a number ");
    scanf("%d", &i); 
    return i;
}
int main()
{
    int a = 8, b = 26, c, d;
    c = take_number();
    printf("Entered number is: %d\n", c);
    print_star(a);
    d = sum(a, b);
    printf("\nSum is: %d\n", d);
    print();
    return 0;
}

// With no arguments and with no return value.
void print()
{
    printf("Game Over");
}
// With arguments and with return value.
int sum(int a, int b)
{
    return a + b;
}
