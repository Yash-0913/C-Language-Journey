// unions in c
/* unions are a lot similar like structure the only difference is that instead of giving separate locations for each
member of structure variables in union it allocates only one common memory block for all members and allocates memory
that the highest memory of member if a new member is used the previous members data gets rewrite*/

#include <stdio.h>
#include <string.h>
// struct student
// {
//     int id;
//     int marks;
//     char name[20];
// };
union student
{
    int id;
    int marks;
    char fav_char;
    char name[20];
};
int main()
{
    //    struct student s1={1,15,"Yash Wankhede"};
    union student s1;

    s1.id = 1;
    s1.marks = 19;
    s1.fav_char = 'c';
    strcpy(s1.name, "Yash Wankhede");

    printf("%d\n", s1.id);
    printf("%d\n", s1.marks);
    printf("%c\n", s1.fav_char);
    printf("%s\n\n", s1.name);

    s1.id = 1;
    s1.marks = 19;
    strcpy(s1.name, "Yash Wankhede");
    s1.fav_char = 'c';

    printf("%d\n", s1.id);
    printf("%d\n", s1.marks);
    printf("%c\n", s1.fav_char);
    printf("%s\n\n", s1.name);

    s1.id = 1;
    s1.fav_char = 'c';
    strcpy(s1.name, "Yash Wankhede");
    s1.marks = 19;

    printf("%d\n", s1.id);
    printf("%d\n", s1.marks);
    printf("%c\n", s1.fav_char);
    printf("%s\n\n", s1.name);

    return 0;
}