#include <stdio.h>
int main()
{
    int a=25; 
    float b=25.5;
    void* ptr = &a;  // when we don't want to give the pointer data type for now then we use void pointer (general purpose pointer variable)
    printf("The value of a is: %d\n",*((int*)ptr)); // ---> we cannot dereference void pointers directly as we don't know the data type so we need to typecast it to an data type
    ptr =&b;
    printf("The value of a is: %.2f",*((float*)ptr));
    // tip: in DMA functions like malloc(),calloc() return void pointer 
    // also we can't use void pointer in pointer arithmetic as we don't know the data types
    return 0;
}