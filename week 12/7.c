#include<stdio.h>
#include<string.h>
int length1(int);
int main()
{
   length1(8);



  return 0;
}
int length1(int a)
{  a=a+2;
    char FILENAME[]="names.txt";
   FILE *ptr=fopen("names.txt","r");
    char arr[100];
    int len=0;
    //int sum=0;
   if (ptr==NULL)
   {
    printf("ERROR");
    return 1;
   }
   while (fgets(arr,sizeof(arr),ptr)!=0)
   {
     len=strlen(arr);
     if (len==a)
     {
        printf("%s",arr);
     }
     
   }


 return 0;
}
