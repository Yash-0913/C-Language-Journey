/// Structures in c

#include <stdio.h>
#include <string.h>
/* structure is a user defined data type use to create new data types
   In structure you can create data type containing diff types of data types  unlike arrays making them more useful
   like this whole struct student.....}; is a data type having variables like yash */
struct student
{
    int id;
    int marks;
    char fav_char;
    char name[34];
}; // can also declare variable like yash in here: --> } yash,gaurav  it's also are global variable
struct student ravi={2,10,'c',"Ravi Kumar"}; // can create global variables of structure
void print()
{
        printf("%s id no %d have %d marks and his fav char is %c\n",ravi.name, ravi.id, ravi.marks, ravi.fav_char);
}
int main()
{
    // or can also declare like this
    // there are two ways to initialise struct
    struct student yash = {1, 15, 'a', "Yash Wankhede"}, harry; // struct student is a data type
    // can't do this
    // ravi = {2, 18, 'b'};

    harry.id = 3;
    harry.marks = 19;
    harry.fav_char = 'm';
    // can't do like this in string
    //  harry.name = "Harry Potter";
    strcpy(harry.name, "Harry Potter");

    printf("Harry marks are %d\n", harry.marks);
    printf("%s id no %d have %d marks and his fav char is %c\n",yash.name, yash.id, yash.marks, yash.fav_char);
    print();

    // in structures the variable members are stored in  consecutive memory locations but are in diff^t memory blocks to solve this issue we use unions
    printf("\n%x %x %x ",&yash.id,&yash.marks,&yash.fav_char);
    printf("\n%x %x %x ",&harry.id,&harry.marks,&harry.fav_char);
    printf("\n%x %x %x ",&ravi.id,&ravi.marks,&ravi.fav_char);

    return 0;
}