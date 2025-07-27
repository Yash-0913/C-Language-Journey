#include <stdio.h>
#include <stdlib.h>

// Case 1: Dangling Pointer due to returning address of local variable
int* getLocalAddress() {
    int a = 10; // Local variable (lives inside stack frame of this function)
    return &a;  // ❌ Dangerous: returning address of a local variable (invalid after return)
}

// Case 2: Dangling Pointer after free()
void freeMemoryDangling() {
    int* ptr = (int*)malloc(sizeof(int));
    *ptr = 100;
    printf("Before free: *ptr = %d\n", *ptr);

    free(ptr);     // Memory freed
    // ptr now becomes a dangling pointer
    // printf("*ptr after free = %d\n", *ptr); // ❌ Undefined behavior

    ptr = NULL;    // ✅ Good practice: Set pointer to NULL after freeing
}

// Case 3: Dangling Pointer when multiple pointers point to same memory
void multiplePointerDangling() {
    int* ptr1 = (int*)malloc(sizeof(int));
    int* ptr2 = ptr1; // Both point to same memory
    *ptr1 = 50;

    free(ptr1);    // Memory freed
    // Now ptr2 is also dangling
    // printf("*ptr2 = %d\n", *ptr2); // ❌ Undefined behavior

    ptr1 = NULL;
    ptr2 = NULL;   // ✅ Always nullify all aliases
}

// Case 4: Use after scope ends
void scopeBasedDangling() {
    int* p;

    {
        int x = 30;
        p = &x;  // Valid inside this block
    }
    // x is out of scope here; p becomes a dangling pointer
    // printf("*p = %d\n", *p); // ❌ Invalid access
}

int main() {
    printf("---- Case 1: Return Local Address ----\n");
    int* dptr1 = getLocalAddress();
    // printf("*dptr1 = %d\n", *dptr1); // ❌ Use of dangling pointer

    printf("---- Case 2: Free Memory ----\n");
    freeMemoryDangling();

    printf("---- Case 3: Multiple Pointer Dangling ----\n");
    multiplePointerDangling();

    printf("---- Case 4: Scope-based Dangling ----\n");
    scopeBasedDangling();

    return 0;
}
