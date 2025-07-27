// Refer 72_function_pointers_notes.txt for notes

#include <stdio.h>

// A simple function to add two numbers
int add(int a, int b) {
    return a + b;
}

// A simple function to subtract two numbers
int subtract(int a, int b) {
    return a - b;
}

// A function that takes a function pointer as an argument
void print_result(int (*func_ptr)(int, int), int x, int y) {
    printf("Result: %d\n", func_ptr(x, y));
}

int main() {
    // Declare a function pointer and assign it to 'add'
    int (*func_ptr)(int, int) = add;

    // Use the function pointer
    int result = func_ptr(5, 3);
    printf("Result using function pointer: %d\n", result);

    // Changing the function pointer to another function
    func_ptr = subtract;
    result = func_ptr(5, 3);
    printf("Result using changed function pointer: %d\n", result);

    // Passing function pointer to another function
    print_result(add, 10, 20);
    print_result(subtract, 50, 25);

    return 0;
}
