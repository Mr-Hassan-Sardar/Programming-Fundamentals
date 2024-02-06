//This program will print the first 4 perfect numbers.
// This program is written by  "Hassan Sardar"  roll no "22p-9108".

#include<stdio.h>

int main()
{
  int i, j, sum;
  for(i=1;i<=10000;i++)   // outer loop
   {
      sum=0;
          for(j=1;j<=i/2;j++)  // inner loop
           {
              if(i%j==0)
               sum=sum+j;
           }
      if(sum==i)
      printf("%d is perfect number\n",i);
}

return 0;

}
