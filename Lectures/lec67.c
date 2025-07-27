/*
    C File Handling: Common File I/O Functions & Examples
    -----------------------------------------------------
    Covers:
    - File Open Modes
    - fgets(), fputs()
    - fgetc(), fputc()
    - FILE pointers

    Save this in your lec/ folder as 'c_file_handling_notes.c'
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // ====================
    // 1. File Opening Modes
    // ====================
    /*
        r  : Open text file for reading.  The file must exist.
        w  : Create a text file for writing. If exists, overwrite.
        a  : Append to a text file. If it does not exist, create new.
        r+ : Open for reading & writing. Must exist.
        w+ : Create for read/write. Overwrite if exists.
        a+ : Read & append. Create if not exists.

        Add 'b' for binary mode (e.g., "rb", "wb", etc.)
    */

    // ==================================
    // 2. Writing a String to a File (fputs)
    // ==================================
    FILE *fp_write = fopen("sample_output.txt", "w"); // Open (create) for writing
    if(fp_write == NULL){
        printf("Error opening file for writing.\n");
        return 1;
    }
    fputs("Hello, this is an example string written by fputs.\n", fp_write); // Write string to file
    fclose(fp_write); // Don't forget to close files!

    // =================================
    // 3. Reading a String from a File (fgets)
    // =================================
    char str[100];
    FILE *fp_read = fopen("sample_input.txt", "r"); // Open existing file for reading
    if(fp_read == NULL){
        printf("Error opening file for reading.\n");
        return 1;
    }
    // Read first line from the file
    if(fgets(str,100,fp_read)!=NULL){
        printf("Read from file using fgets:\n%s", str);
    }
    fclose(fp_read);

    // =================================
    // 4. Writing, Reading character-by-character (fputc, fgetc)
    // =================================
    FILE *fp_chars = fopen("char_example.txt", "w");
    if(fp_chars == NULL) {
        printf("Error opening char_example.txt for writing.\n");
        return 1;
    }
    fputc('A', fp_chars);
    fputc('\n', fp_chars);
    fputc('B', fp_chars);
    fclose(fp_chars);

    // Reading those chars:
    fp_chars = fopen("char_example.txt", "r");
    if(fp_chars == NULL) {
        printf("Error opening char_example.txt for reading.\n");
        return 1;
    }
    char ch;
    printf("Reading from char_example.txt using fgetc:\n");
    while((ch = fgetc(fp_chars)) != EOF) {
        putchar(ch); // Print chars to console
    }
    fclose(fp_chars);

    // =================================
    // 5. Important: Closing Files
    // =================================
    // Always use fclose(FILE *fp) to free resources!

    return 0;
}

/*
    ==============================
    Summary Table: File I/O Modes
    ==============================
        Mode    |   Description
        -----------------------------
        "r"     |   Read, must exist
        "w"     |   Write, create/overwrite
        "a"     |   Append, create if not exist
        "r+"    |   Read/Write, file must exist
        "w+"    |   Read/Write, overwrite/create
        "a+"    |   Read/Append, create if not exist

        Add "b" for binary (e.g., "rb", "wb")

    ==============================
    Useful Functions:
    ==============================
      - fgets(char *str, int n, FILE *fp): Reads a line/upto n-1 chars.
      - fputs(const char *str, FILE *fp): Writes a string to file.
      - fgetc(FILE *fp): Reads a single char.
      - fputc(char c, FILE *fp): Writes a single char.
      - FILE *fopen(const char *filename, const char *mode): Open file.
      - int fclose(FILE *fp): Close open file.

    Practice: Explore files in your lec/ folder visually after running this program!
*/
