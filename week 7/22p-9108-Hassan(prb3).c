//This program will calculate the samation.
// This program is written by  "Hassan Sardar"  roll no "22p-9108".

#include<stdio.h>

int fact(int n);        // factorial function declaration
int power(int p, int n);  // power function declaration
float total(int x, int n);  // total calculation function declaration

int main()
{

int n, x; 
printf("Enter the value of x:");
scanf("%d",&x);
printf("Enter the value of n:");
scanf("%d",&n);

printf("%f\n",total(x,n));    // total function call

return 0;
}


int fact(int n)    // factorial  function definitiom
{
  int a=1;
   for(int i=1;i<=n;i++) //loop
   {
     if(n==0)
     a=1;
     a*=i;
   }
return a;
}


int power(int p, int n)  // power function definition
{
  int a=1;
  for(int i=0;i<n;i++)  // loop
  a*=p;
return a;
}


float total(int x, int n)   // total function definition
{
 float a=1,b;
  for(int i=1;i<=n;i++)
  {
   b=(float)power(x,i)/fact(i);
   a=a+b;
  }
 return a;
}
