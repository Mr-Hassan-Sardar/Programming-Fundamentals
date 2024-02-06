// This program is written by "Hassan Sardar" roll no."22p-9108".
// This program will calculate highest plaindrome number of 2 Three digits 
multiplication.
#include<stdio.h>
int reverse(int n);
int main()
{
int a,b;
int flag=0;
for(int i=100;i<=999;i++)
{
for(int j=100;j<=999;j++)
{
a=i*j;
b=reverse(a);
if(a==b)
{
if(a>flag)
{
flag=a;
}
}
} 
}
printf("Highest plaindrome number is:%d\n",flag);
return 0;
}
int reverse(int n)
{
int a=n;
int b;
int rev=0;
for(int i=1;a!=0;i++)
{
b=a%10;
a=a/10;
rev=rev*10+b;
}
return rev;
}
