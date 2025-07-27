/* 🔹 CALLBACK FUNCTIONS IN C – LEC 73

📌 What is a callback function?
- A function that is passed as an argument to another function and is called (invoked) inside that function.

📌 Why use callbacks?
- For dynamic execution of different behaviors inside a general function.
- Improves modularity and reusability of code.
- Commonly used in event handling, sorting, or menu-based programs.

📌 Function pointer as callback:
    void compute(int (*operation)(int, int)) {
        int a = 5, b = 7;
        printf("%d\n", operation(a, b));
    }

    int add(int x, int y) {
        return x + y;
    }

    compute(add); // calls add inside compute()

✅ Real-world analogy:
- Like telling a delivery guy which restaurant to pick food from (you’re passing the choice).

📌 Uses in C standard library:
- `qsort()` uses callback for comparison function.*/


#include <stdio.h>

// A callback function: performs an operation on 2 numbers
int sum(int a, int b) {
    return a + b;
}

// Another callback function
int product(int a, int b) {
    return a * b;
}

// A higher-order function: takes a function pointer as argument
void compute(int (*operation)(int, int)) {
    int x = 5, y = 7;
    printf("Result of callback: %d\n", operation(x, y));
}

int main() {
    // Passing sum as a callback
    compute(sum);

    // Passing product as a callback
    compute(product);

    return 0;
}
