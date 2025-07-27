/* Memory Leak in C - Summary Notes

🔹 A memory leak occurs when dynamically allocated memory (using malloc/calloc) is not freed using free().
🔹 Memory leaks waste system memory and can lead to crashes in long-running programs.

Example of memory leak:
    int *ptr = malloc(10 * sizeof(int));
    // use ptr
    // forgot to free(ptr); ❌ memory leak

How to fix it:
    - Always call free(ptr) after you're done using the allocated memory.
    - Optionally, set the pointer to NULL after freeing to avoid dangling pointers.

Best Practices:
    ✅ Check if malloc returned NULL
    ✅ Use free(ptr) to release memory
    ✅ Set ptr = NULL after freeing */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Memory Leak Example
    printf("---- Memory Leak Example ----\n");

    // Dynamically allocate memory for 5 integers
    int *leak_ptr = (int *)malloc(5 * sizeof(int));

    // Check if malloc succeeded
    if (leak_ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // We can use the memory here (e.g., leak_ptr[0] = 10;)
    // But we forget to free it
    // So, this causes a MEMORY LEAK ❌

    // ---- Now Correcting It Below ----
    printf("\n---- Fixed Memory Leak ----\n");

    // Allocate memory again properly
    int *safe_ptr = (int *)malloc(5 * sizeof(int));
    if (safe_ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Use the memory
    for (int i = 0; i < 5; i++)
    {
        safe_ptr[i] = i * 2;
        printf("safe_ptr[%d] = %d\n", i, safe_ptr[i]);
    }

    // Free the memory after use ✅
    free(safe_ptr);
    safe_ptr = NULL;  // Optional: Prevents dangling pointer

    return 0;
}

