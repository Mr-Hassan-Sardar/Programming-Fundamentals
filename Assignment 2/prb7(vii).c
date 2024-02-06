//This program is written by "Hassan Sardar" roll no. "22p-9108".
//This program will print the given pattern"vii".
#include <stdio.h>
int main()
{
for(int i=1; i<=10; i++)
{
for(int j=10; j>=1; j--)
{ 
if(i==1 || i==10 || i==j) // because asterisks will be printed at 
the top most and bottom line and one diagonal line.
printf("*"); 
else
printf(" 
"); 
}
printf("\n");
}
return 0;
}