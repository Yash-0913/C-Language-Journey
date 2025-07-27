#include <stdio.h>

int main() {
    // Null pointer: a pointer that doesn't point to any valid memory address
    int *ptr = NULL;  // ptr is a null pointer now

    // Why use NULL?
    // 1. To initialize pointers safely
    // 2. To check whether a pointer has been assigned memory before using it

    printf("Value of ptr: %p\n", ptr);  // It will print (nil) or 0x0

    // Check before dereferencing
    if (ptr != NULL) {
        // This block won't execute since ptr is NULL
        printf("Pointer is not NULL. Value at ptr: %d\n", *ptr);
    } else {
        printf("Pointer is NULL. Cannot dereference.\n");
    }

    // Example: assigning memory later
    int a = 10;
    ptr = &a;  // Now the pointer points to a valid memory address

    if (ptr != NULL) {
        printf("Pointer is now assigned. Value at ptr: %d\n", *ptr);
    }

    // Resetting pointer again to NULL to avoid dangling pointer
    ptr = NULL;
    printf("Pointer reset to NULL after use.\n");

    return 0;
}
