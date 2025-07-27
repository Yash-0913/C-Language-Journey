// Arrays

#include<stdio.h>
int main()
{
   int a=5;
   int *ptr=&a;
   printf("The value of a is: %d\n",a);
   printf("The value of a via pointer is: %d\n",*ptr);
   printf("The address of a is: %p\n",ptr);
//    printf("The address of a is: %x\n",*ptr);    x shows address in hex form
   printf("The address of a is: %x\n",&a);       
   printf("The address of ptr is: %p\n",&ptr);

//    null pointer is used when there is no value in the pointer at that time. 
//    So we get to know that that pointer is pointing to no value

   int *ptr2 = NULL;
    printf("The address of ptr2 is: %p\n",&ptr2);
    printf("The address of some garbage value in ptr2 is: %p\n",ptr2);
//    int *ptr2;
//     printf("The address of some garbage value in ptr2 is: %p\n",ptr2);


return 0;
}