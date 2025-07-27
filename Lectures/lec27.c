// Pointer Arithmetic
// only ++,--,+,- operators can be used

#include<stdio.h>
int main()
{
//    int a=5;
//    int *ptr1=&a;
//    printf("%d\n",ptr1);
//    printf("%d\n",++ptr1);   // when we do arithmetic operations on pointers in adds the size of data type with array like if int is used then it will add 4 to the address
//    printf("%d\n",ptr1+1);
//    printf("%p\n",ptr1);
//    printf("%p\n",ptr1-3);
//    char c='$';
//    char *ptr2=&c;
//    printf("%x\n",ptr2);
//    printf("%x\n",--ptr2);

    int arr[]={5,1,4,2,5};
    int *ptr =arr;
    // arr++;    this will show an error as arr is an const
    printf("The address of first element of array is: %x",arr);   // arr is an pointer 
    printf("\nThe address of first element of array is: %x",ptr);
    printf("\nThe address of first element of array is: %x",&arr[0]); // by using address of operator
    printf("\nThe address of second element of array is: %x",(arr+1)); // when we do arr+i it becomes pointer to thai i place in array
    printf("\nThe address of second element of array is: %x",++ptr); // as ptr is pointer of arr so sie of int will be add
    // we can add or sub within pointer like ptr but can't with arr cause it a constant and already has address of 1st element of array 

    printf("\nThe value of first element of array is: %d",arr[0]);
    printf("\nThe value of first element of array is: %d",*(arr)); // as arr is a pointer after dereference operator  it shows value
    // arr[i] == *(arr+i)
    printf("\nThe value of second element of array is: %d",*(ptr));
    printf("\nThe value of second element of array is: %d",arr[1]);
    printf("\nThe value of second element of array is: %d",*(&arr[1]));
    printf("\nThe value of third element of array is: %d",*(arr+2));


return 0;
}