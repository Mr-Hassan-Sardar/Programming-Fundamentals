//This program will draw the given pattern.
// This program is written by  "Hassan Sardar"  roll no "22p-9108".

#include<stdio.h>   //header file

int main()
{
char a;

printf("Enter the symbol:");
scanf("%c",&a);

  for(int i=1;i<=5;i++)  // outer loop
   {
      for(int j=1;j<=i;j++)  //inner loop
      {
         printf("%c",a);
       }
  printf("\n");
   }
  for(int k=1;k<=4;k++)  // outer loop
   {
       for(int l=k;l<=4;l++)   // inner loop
         printf("%c",a);
  printf("\n");
   
  }

return 0;
}
