#include<stdio.h>
int main()
{
   char FILENAME[]="text.txt";
   FILE *ptr=fopen("text.txt","r");
char arr[20];
   if (ptr==NULL)
   {
     printf("ERROR");
     return 1;
   }

   while (fgets(arr,20,ptr)!=0)
   {
      printf("%s\n",arr);
   }
   
   fclose(ptr);
   








 return 0;
}