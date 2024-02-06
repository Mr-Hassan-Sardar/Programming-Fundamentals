//This program is written by "Hassan Sardar" roll no."22p-9108".
// This program will calculate the distance between two points and tell us 
number of steps.
#include<stdio.h>
#include<math.h>
int main()
{
int x1=0, y1=0;
int x2, y2;
float dist, a=0;
int count=0;
for(int i=1; ;i++)
{
printf("Enter the value of x:");
scanf("%d",&x2); 
printf("Enter the value of y:");
scanf("%d",&y2);
if(x1==x2&&y1==y2)
break;
else
{ 
dist=sqrt(((x1-x2)*(x1-x2))+((y1-y2)*(y1-y2)));
a=a+dist;
count++;
}
x1=x2;
y1=y2;
}
if(count==0)
{
printf("Total distance traveled:0.000\nNo.of steps:0\n");
printf("Average distance traveled:0.000\n");
}
else
{
printf("Total distance traveled:%0.3f\nNo.of steps:%d\n",a,count);
printf("Average distance traveled:%0.3f\n",a/count);
}
return 0;
}
