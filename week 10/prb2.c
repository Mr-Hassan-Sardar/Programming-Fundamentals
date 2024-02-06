//This program is written by "Hassan Sardar"  roll no."22p-9108".
// This program will show the sum of dice 1000 times.
// i asked from you that if i can do it without arrays so you allowed me to do so. 

#include<stdio.h>
#include<time.h>
#include<stdlib.h>  
int main()
{
int count=0,count1=0,count2=0,count3=0,count4=0,count5=0,count6=0,count7=0,count8=0,count9=0,count10=0;
int a, b, sum;
int arr[1000];
srand(time(NULL));
for(int i=0;i<1000;i++)
{

a=rand()%(6-1+1)+1; 
b=rand()%(6-1+1)+1;
sum=a+b;         
arr[i]=sum;
if(sum==2)
count++;
else if(sum==3)
count1++;
else if(sum==4)
count2++;
else if(sum==5)
count3++;
else if(sum==6)
count4++;
else if(sum==7)
count5++;
else if(sum==8)
count6++;
else if(sum==9)
count7++;
else if(sum==10)
count8++;
else if(sum==11)
count9++;
else if(sum==12)
count10++;
}

printf("\n2\t %d\n3\t %d\n4\t %d\n5\t %d\n6\t %d\n7\t %d\n8\t %d\n9\t %d\n10\t %d\n11\t %d\n12\t %d\n",count,count1,count2,count3,count4,count5,count6,count7,count8,count9,count10);

return 0;
}
