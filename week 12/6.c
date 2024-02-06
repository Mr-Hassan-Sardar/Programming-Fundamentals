#include<stdio.h>
#include<string.h>
int main()
{
   char FILENAME[]="names.txt";
   FILE *ptr=fopen("names.txt","r");
    char arr[100];
    int a=0;
    int sum=0;
   if (ptr==NULL)
   {
    printf("ERROR");
    return 1;
   }
   while (fgets(arr,sizeof(arr),ptr)!=0)
   {
     a=strlen(arr);
     a=a-2;
    // printf("THE STRING LENGTH IS %d\n",a);
     sum=a+sum;
   }
printf("THE SUM OF LENGTH IS %d\n",sum);
   


return 0;
     
}
