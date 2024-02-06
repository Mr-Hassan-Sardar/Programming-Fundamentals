//This program is written by "Hassan Sardar" roll no. "22p-9108".
//This program will draw the pattern "v".
#include<stdio.h>
int main()
{
for(int i=0;i<=6-1;i++)
{
for(int j=0;j<=i; j++)
printf(" ");
for(char k=65;k<=(70-i);k++)
printf("%c ",k);
printf("\n");
}
return 0;
}