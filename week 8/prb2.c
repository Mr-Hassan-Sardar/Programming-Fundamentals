//This program is written by "Hassan sardar"   roll no."22p-9108"
#include<stdio.h>
int main()
{
int arr[60];
int i;
int j;
for(i=0;i<20;i++)
{
j=i*i;
arr[i]=j;
}
for(int k=20;k<40;k++)
{
j=1;
j=k*k*k;
arr[k]=j;
}
for( int m=40;m<60;m++)
arr[m]=m + m-40;         
for(int l=0;l<60;l++)
printf("%d ",arr[l]);
return 0;
 } 
  
