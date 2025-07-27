// travel agency manager Ex.
#include <stdio.h>
#include <string.h>
typedef struct driver
{
    char Name[30];
    long int lic;
    char route[30];
    int Distance;
} dr;

void get_data(dr s1[],int no)
{
    for (int i = 0; i < no; i++)
    {
        printf("Enter the details of %dth driver: \n", i + 1);

        printf("Name: ");

        fgets(s1[i].Name, 30, stdin);
        s1[i].Name[strcspn(s1[i].Name, "\n")] = 0; // to replace unnecessary \n in the string with a terminator \0

        printf("Licence No.: ");
        scanf("%ld", &s1[i].lic);

        printf("Route: ");

        getchar(); // To remove the \n created by scanf as fgets gets terminated if it encounters \n we use getchar()
        fgets(s1[i].route, 30, stdin);
        s1[i].route[strcspn(s1[i].route, "\n")] = 0; // to replace unnecessary \n in the string with a terminator \0

        printf("Distance in Km: ");
        scanf("%d", &s1[i].Distance);
        printf("\n");
        getchar(); // To remove the \n created by scanf as fgets gets terminated if it encounters \n so it might not take any input we use getchar() before fgets if there is \n by scanf or any other way
    }
}
void print_data(dr s1[],int no)
{
    printf("Details of the drivers from Yash's travel agency: \n\n");
    for (int i = 0; i < no; i++)
    {
        char no = 'a';
        printf("%d. %c) Name of Driver: ", i + 1, no);
        puts(s1[i].Name);
        no++;
        printf("   %c) Licence No.: %ld\n", no, s1[i].lic);
        no++;
        printf("   %c) Route: ", no); // if strcspm hasn't used after fgets func. the unnecessary \n would had been stored in route which would cause next line leaves an unnecessary blank line
        puts(s1[i].route);
        no++;
        printf("   %c) Distance in Km: %d\n\n", no, s1[i].Distance);
    }
}
int main()
{
    int no;
    printf("Enter the number of drivers: ");
    scanf("%d",&no);
    getchar();
    dr s1[no];
    get_data(s1,no);
    print_data(s1,no);
    return 0;
}