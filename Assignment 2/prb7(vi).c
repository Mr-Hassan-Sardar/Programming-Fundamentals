//This program is written by "Hassan Sardar" roll no. "22p-9108".
//This program will draw the pattern "vi".
#include<stdio.h>
int main()
{
for(int i=1;i<=4;i++)
{
for(int j=i; j<=4; j++)
printf("*");
for(int k=1; k<=(2*i-2); k++)
printf(" ");
for(int l=i; l<=4; l++)
printf("*");
printf("\n");
}
return 0;
}