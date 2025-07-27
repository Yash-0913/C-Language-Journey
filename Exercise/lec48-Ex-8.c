#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char* s = NULL;               // Temporary input buffer
    char* emp_ids[3];             // Array of pointers to store final IDs
    int len;

    for (int i = 0; i < 3; i++) {
        printf("Enter length of Employee ID %d: ", i + 1);
        scanf("%d", &len);
        getchar(); // clear leftover newline

        s = (char*)realloc(s, (len + 1) * sizeof(char));
        if (s == NULL) {
            printf("Memory allocation failed.\n");
            return 1;
        }

        printf("Enter Employee ID %d: ", i + 1);
        fgets(s, len + 1, stdin);
        s[strcspn(s, "\n")] = '\0'; // Remove newline if present

        emp_ids[i] = (char*)malloc((strlen(s) + 1) * sizeof(char));
        strcpy(emp_ids[i], s);  // Copy input string into final array
    }
    free(s);
    printf("\nStored Employee IDs:\n");
    for (int i = 0; i < 3; i++) {
        printf("Employee %d ID: %s\n", i + 1, emp_ids[i]);
        free(emp_ids[i]);  // Free each individual ID
    }

    free(s); // Free temporary input buffer

    return 0;
}
