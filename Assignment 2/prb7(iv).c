//This program is written by "Hassan Sardar" roll no. "22p-9108".
//This program will draw the pattern "iv".
#include<stdio.h>
int main()
{
for(int i=1;i<=5;i++)
{
for(int j=5;j>i;j--)
printf(" ");
for(int k=1;k<=i;k++)
printf("%d",k);
for(int l=i-1;l>=1;l--)
printf("%d",l);
printf("\n");
}
return 0;
}