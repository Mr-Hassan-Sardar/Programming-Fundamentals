#include<stdio.h>
#include<string.h>
int main()
{
    char FILENAME[]="names.txt";
    char FILENAME2[]="subject.txt";
   FILE *ptr=fopen("names.txt","r");
   FILE *ptr2=fopen("subject.txt","w");
   char arr[20];
   char s1[]="programing fundamentals";
   char s2[]="calxulas";
   char s3[]="PHYSICS";
   char s4[]="ENGLISH COMPOSITION";
   char s5[]="\n";


   if (ptr==NULL || ptr2==NULL)
   {
    printf("ERROR");
    return 1;
   }
   while (fgets(arr,20,ptr))

   {  int len=strlen(arr);
       printf("%d",len);
       arr[len-2]='\0';
      // printf("%d",arr[len-2]);
    ///   arr[len-2]="/o";
   
     fprintf(ptr2,"%s",arr);
     fprintf(ptr2,",%s",s1);
      fprintf(ptr2,",%s",s2);
      fprintf(ptr2,",%s",s3);
      fprintf(ptr2,",%s",s4);
      fprintf(ptr2,"%s",s5);
      



      
   }
   
   
   



 return 0;
}


