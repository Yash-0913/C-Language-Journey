#include <stdio.h>

int main() {
    // Case 1: Uninitialized Pointer (Wild Pointer)
    int *ptr;  // ❌ Wild pointer: not assigned any address yet
    // printf("%d\n", *ptr); // ❌ Undefined behavior: may crash or print garbage

    // Case 2: Pointer assigned garbage address manually
    int *wild = (int*)0x12345678; // ❌ Dangerous: pointing to arbitrary memory
    // printf("%d\n", *wild); // ❌ May cause segmentation fault

    // Case 3: Declared but not initialized struct pointer
    struct Student {
        int roll;
    };

    struct Student *s;
    // s->roll = 101; // ❌ Wild pointer: s points to garbage

    // Fixing the wild pointer by proper initialization
    int a = 10;
    ptr = &a;   // ✅ Now it's safe
    printf("Value of a via ptr: %d\n", *ptr);

    struct Student st = {101};
    s = &st;   // ✅ Properly initialized
    printf("Student roll: %d\n", s->roll);

    return 0;
}
