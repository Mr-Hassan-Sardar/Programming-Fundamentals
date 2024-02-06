#include<stdio.h>
int main()
{
   char FILENAME[]="names.txt";
   FILE *ptr=fopen("names.txt","r");
char arr[20];
   if (ptr==NULL)
   {
    printf("ERROR");
    return 1;
   }
   while (fgets(arr,20,ptr)!=0)
   {
     printf("%.4s\n",arr);
   }
   
   



     
}