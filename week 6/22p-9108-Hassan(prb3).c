//This program will show us the HCF between two integers.
// This program is written by       "Hassan Sardar"     "22p-9108".
 
 #include<stdio.h>
 int hcf(int a, int b);
 int main()
 {
 int n1, n2;
 int HCF;
 
printf("Enter first integer:");
scanf("%d",&n1);
printf("Enter the second integer:");
scanf("%d",&n2);


HCF=hcf(n1,n2);

printf("HCF of %d and %d is :%d",n1,n2,HCF);

return 0;
}


int hcf(int a, int b)
{
int c;
    for (int i=1;i<=a&&i<=b;i++)
    {
     if(a%i==0&&b%i==0)
       {
       c=i;
       }
    }
return c;
}   

