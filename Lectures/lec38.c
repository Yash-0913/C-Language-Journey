// typedef in c
#include <stdio.h>
#include <string.h>
typedef struct student
{
    int id;
    char name[50];
} ss;

int main()
{
    struct student s1;
    ss s2 = {2, "Harry"};
    s1.id = 1;
    strcpy(s1.name, "Yash Wankhede");
    printf("%s's ID is %d\n", s1.name, s1.id);
    printf("%s's ID is %d\n", s2.name, s2.id);

    // anther use of typedef is
    int *a, *b, c = 5;
    a = &c;
    b = &c;
    // we can create an int pointer like intptr
    typedef int *intptr;
    intptr no = &c;
    printf("%d \n",*b);
    *no=10;
    printf("%d \n",*no);
    // typedef previous_name alise_name
    // typedef makes an another name for any data type we can use both the original and alise (nickname) in code
    // like int can be represented as i or long int can be presented as li
    //    typedef long int li;
    //    li a=10;
    //    printf("%d\n",a);
    //    long int b=5;
    //    printf("%d\n",a*b);
    return 0;
}