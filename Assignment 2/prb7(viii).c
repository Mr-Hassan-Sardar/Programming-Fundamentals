//This program is written by "Hassan Sardar" roll no. "22p-9108".
//This program will print the given pattern"viii".
#include <stdio.h>
int main()
{
for(int i=1; i<=10; i++)
{
for(int j=1; j<=10; j++)
{
if(j==1 || j==10 || i==1 || i==10) //Because asterisks will be 
printed at top, bottom and on both sides.
printf("*");
else
printf(" ");
}
printf("\n");
}
