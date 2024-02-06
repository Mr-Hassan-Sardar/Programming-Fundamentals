//This program will draw the given pattern.
// This program is written by  "Hassan Sardar"  roll no "22p-9108".

#include<stdio.h>

int main()
{
   for(int i=1;i<=5;i++)  // outer loop
   {
      for(int j=5;j>i;j--)  // inner loop
       printf(" ");
         for(int k=1;k<=i;k++)  // inner loop
          printf("*");
   printf("\n");
   }
return 0;
}
