//This program is written by "Hassan Sardar" roll no."22p-9108".
// This program will calculate highly divisible triangular number.
#include<stdio.h>
int main()
{
int a, count, flag;
for(int i=1;flag<=5 ; i++)
{
count=0;
a=0;
for(int j=1;j<=i;j++)
{
a=a+j;
}
for(int k=1;k<=a;k++)
{
if(a%k==0)
{
count ++;
}
} 
if(count>10)
{
printf("%d:",a);
for(int l=1;l<=a;l++)
{
if(a%l==0)
printf("%d ",l);
}
printf("\n");
flag++;
}
}
return 0;
}
