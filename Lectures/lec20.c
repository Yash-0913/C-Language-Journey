// Ex.1 - Sol^n

#include <stdio.h>
int main()
{
    int num, n, product, i;
    printf("Enter the number you want multiplication table of: ");
    scanf("%d", &num);
    printf("Enter the number till the multiplication table you need: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        // product=num*i;
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}