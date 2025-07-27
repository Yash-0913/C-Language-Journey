#include<stdio.h>
#include<string.h>
void removespace(char str[50])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==' ')
        {
            for (int j = i; j < strlen(str); j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
 
}
int main()
{
   char str[50];
   printf("Enter String: ");
   fgets(str,50,stdin);
   str[strcspn(str,"/n")]='\0';
   removespace(str);
   printf("string without spaces: %s",str);
return 0;
}