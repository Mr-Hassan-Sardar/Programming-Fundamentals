//This program is written by "Hassan sardar"   roll no."22p-9108"

#include<stdio.h>
int main()
{
int max=0;
int min;
int sum=0;
float avr;
int count=0;
int count_e=0;

int arr1[10];
printf("Enter 10 elements in array\n");
for(int i=0;i<10;i++)
{
  scanf("%d",&arr1[i]);
  if(arr1[i]>max)
  max=arr1[i];
}


for(int j=1;j<10;j++)
{
min=arr1[0];
if(min>arr1[j])
min=arr1[j];
}
printf("maximum value is %d \nminimum value is %d\n",max,min);

for(int k=0;k<10;k++)
{
sum=sum+arr1[k];
}
avr=sum/10;
printf("Sum of the array is %d\naverage of array is %f \n",sum,avr);
printf("value at index 2 is %d\n",arr1[1]);
printf("last element of array is %d\n",arr1[9]);
for(int l=0;l<10;l++)
{
  if(arr1[l]%2==1)
  count++;
  else if(arr1[l]%2==0)
  count_e++;
}
printf("count of odd number is %d\ncount of even number is %d\n",count,count_e); 
for(int m=9;m>=0;m--)
{
printf("%d  ",arr1[m]);
}

return 0;
}
