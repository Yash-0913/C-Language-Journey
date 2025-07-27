// The program reads a pre-written receipt (bill) template from a text file. This template contains placeholders (like {{name}}, {{item}}, {{outlet}}) which need to be replaced with actual user data.
// There are many improvements in this file: for more info cheak this Chatgpt Conversation: https://chatgpt.com/share/687bd710-0ac4-8009-bb11-fad847b39ca5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define char_buffer 1024
int read_receipt_counter(int n) {
    FILE *f = fopen("counter.txt", "r");
    int count = 1; // default if file doesn't exist
    if (f != NULL) {
        fscanf(f, "%d", &count);
        fclose(f);
    }
    return count+n;
}
void update_receipt_counter(int new_count) {
    FILE *f = fopen("counter.txt", "w");
    if (f != NULL) {
        fprintf(f, "%d", new_count);
        fclose(f);
    }
}
void pointer_cheak(FILE *point)
{
    if (!point)
    {
        printf("Error opening file.\n");
        exit(1);
    }
}
void replace_string(char str[], char oldn[11], char *newn)
{
    char temp[char_buffer];
    char *pos;
    while ((pos = strstr(str, oldn)) != NULL)
    {
        strcpy(temp, pos + strlen(oldn));
        *pos = '\0';
        strcat(str, newn);
        strcat(str, temp);
    }
}
int main()
{
    FILE *Template = fopen("letter.txt", "r");
    pointer_cheak(Template);
    FILE *Output = fopen("letter-output.txt", "a");
    pointer_cheak(Output);

    char *sen = (char *)malloc(char_buffer * sizeof(char));
    fread(sen,sizeof(char),char_buffer,Template);
    char *newn = (char *)malloc(100 * sizeof(char));

    printf("Enter Your Name: ");
    fgets(newn, 100, stdin);
    newn[strcspn(newn, "\n")] = '\0';
    replace_string(sen, "{{name}}", newn);

    printf("\nEnter Name of item: ");
    fgets(newn, 100, stdin);
    newn[strcspn(newn, "\n")] = '\0';
    replace_string(sen, "{{item}}", newn);

    printf("\nEnter amount: ");
    fgets(newn, 100, stdin);
    newn[strcspn(newn, "\n")] = '\0';
    replace_string(sen, "{{amount}}", newn);

    printf("\nEnter Name of outlet: ");
    fgets(newn, 100, stdin);
    newn[strcspn(newn, "\n")] = '\0';
    replace_string(sen, "{{outlet}}", newn);

    printf("Template: \n");
    puts(sen);
    free(newn);
    int receipt_no = read_receipt_counter(0);
    fprintf(Output, "\n%d. \n%s\n",receipt_no,sen);

    update_receipt_counter(receipt_no+1);
    free(sen);
    fclose(Template);
    fclose(Output);

    return 0;
}