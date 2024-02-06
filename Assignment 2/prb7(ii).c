//This program is written by "Hassan Sardar" roll no. "22p-9108".
//This program will draw the pattern "ii".
#include<stdio.h>
int main()
{
for(int i=1;i<=5;i++)
{
for(int j=5;j>i;j--)
printf(" ");
for(int k=1;k<=i;k++)
printf("%d",k);
printf("\n");
}
return 0;
}