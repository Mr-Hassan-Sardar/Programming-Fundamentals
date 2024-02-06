//This program is written by "Hassan Sardar"  roll no."22p-9108".
// This program will find second minimum.
#include<stdio.h>
int main()
{
int a[7];
int temp;
printf("Enter the values:");
for(int i=0;i<7;i++)
scanf("%d",&a[i]);
for(int i=0;i<7;i++)         
{
        for(int j=i+1; j<7 ;j++)
        {
            if(a[i]<a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
}
printf("The second smallest element is %d\n",a[7-2]);
  
return 0;
}
