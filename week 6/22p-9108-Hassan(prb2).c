//This program will show us the LCM between two integers.
// This program is written by       "Hassan Sardar"     "22p-9108".

#include<stdio.h>
int lcm(int a, int b);
int main()
{
int num1, num2;
int LCM;

printf("Enter first integer:");
scanf("%d",&num1);
printf("Enter the second integer:");
scanf("%d",&num2);

LCM=lcm(num1,num2);

printf("LCM of %d and %d is :%d",num1,num2,LCM);

return 0;

}


int lcm(int a, int b)
{ 

int c;

if (a > b)
  {
   c=a;
  }
else
  {
   c=b;
  }
while (1) 
  { 
  if (c % a == 0 && c % b == 0) 
     {
     break; 
     } 
++c;
  }
  return c;
}
