// Dynamic Memory Allocation
#include <stdio.h>
#include <stdlib.h> // functions of DMA
void input_arr(int *ptr, int size)
{

    for (int i = 0; i < size; i++)
    {
        printf("Enter the value of %d element of ptr array: \n", i);
        scanf("%d", &ptr[i]);
    }
}
void print_arr(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("The value of %d element of ptr array is: %d\n", i, ptr[i]);
    }
    printf("\n");
}
int main()
{
    int *ptr, size;
    printf("Enter the size of array you want to create: \n");
    scanf("%d", &size);

    /* malloc  -----> 1. memory allocation is used to create array dynamically or use the memory space in heap.
                   2. It gives void pointer so u have to typecast it to store in another pointer
                   3. Initially it stores the values of block garbage values */
    ptr = (int *)calloc(size, sizeof(int));
    input_arr(ptr, size);
    print_arr(ptr, size);

    // free --> it use to free the memory used by DMA
    free(ptr);

    /* calloc  -----> 1. contiguous allocation is used to create array dynamically or use the memory space in heap.
                      2. It gives void pointer so u have to typecast it to store in another pointer
                      3. Initially it stores the values of block in 0 */
    ptr = (int *)calloc(size, sizeof(int));
    print_arr(ptr, size);

    /*realloc  ---->  to change the size of already given dynamically array*/
    int d;
    printf("Enter the new size of array you want to create: \n");
    scanf("%d", &d);
    ptr = (int*)realloc(ptr,d*sizeof(int));
    printf("New ptr is: \n");
    print_arr(ptr,d);
    free(ptr);
    return 0;
}