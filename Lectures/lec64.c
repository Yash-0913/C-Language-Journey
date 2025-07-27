#include<stdio.h>
#include<stdlib.h>
int main()
{
   FILE *ptr = NULL;
   char string[34];
   ptr = fopen("myfile.txt","r"); // reading a file
   fscanf(ptr,"%s",string); // only gets words till reaching space 
   printf("The content of this file is: %s\n",string);
//    ptr = fopen("myfile.txt","w"); // this write in a file(previous content get overwritten)
//    fprintf(ptr,"%s",string); 
   ptr = fopen("myfile.txt","a"); // this also writes text but adds next to it does not overwritten a - append
   fprintf(ptr,"%s",string); 
return 0;
}