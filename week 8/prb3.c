//This program is written by "Hassan sardar"   roll no."22p-9108"
#include<stdio.h>
int main()
{
int n;
int count=0;
printf("Enter the number :");
scanf("%d",&n);
int arr[10]={1,3,4,5,6,7,87,5,5,1};

for(int i=0;i<10;i++)
{
if(arr[i]==n)
count++;
}
printf("%d is %d times in given array",n,count);
return 0;
}
