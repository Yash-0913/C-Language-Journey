#include <stdio.h>
int b = 34; // This is a global variable since it is declared outside main()

int func2()
{
    int a = 56;
    a++;
    return a;
}

int func1(int b1)
{

    // static int store=func2();  it doesn't work as static variable needs constant values as memory allocation happens before execution(running) of program
    static int d = 5; // A static functions holds it's value throughout the program if not declared it gets 0 value
    d++;
    // int loc,b=50;
    // printf("the value of b inside func1 is %d\n", b); // local variable takes preference over global variables like b=50
    // printf("The address of b inside func1 is %d\n", &b);
    // return b1*10;
    return d;
}
int main()
{
    int b = 344;
    // printf("The address of b inside main is %d\n", &b);
    int val = func1(b);
    int *ptr = &val;
    // printf("The address of func1 is: %p\n",&func1(b)); can't do this

    printf("Static Variables: \n");
    printf("%d ", func1(b));
    printf("%d ", func1(b));
    printf("%d ", func1(b));
    printf("%d ", func1(b));

    printf("\nLocal variables: \n");
    printf("%d ", func2());
    printf("%d ", func2());
    printf("%d ", func2());
    printf("%d ", func2());
    // printf("The value of func1 is %d", val);
    // printf("%d", loc);

    return 0;
}
