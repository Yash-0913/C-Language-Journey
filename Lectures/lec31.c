// Call by value and call by Reference

#include<stdio.h>
void call_value(int a) // value of no is copied in a (formal parameter)
{
    a=10;
}
void call_ref(int *a) // // address of no is copied in a (formal parameter) as address is copied we can change it by using pointes
{
    *a=20;
}
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
    int no=5,x=20,y=35;
    printf("the value of a is: %d\n",no);
    call_value(no);
    printf("the value of a is: %d\n",no); // the value of no does not changes as no is copied in arguments of functions no(actual parameters)
    call_ref(&no);
    printf("the value of a is: %d\n",no);// the value of no changes as the address of no is copied in arguments of functions so the value at address changes i.e no changes
    printf("the values of x and y are: %d %d\n",x,y); 
    swap(&x,&y);
    printf("the values of x and y are: %d %d\n",x,y); // values get swap as address is given so change in contents of address changes the values or swaps the value of x and y

return 0;
}