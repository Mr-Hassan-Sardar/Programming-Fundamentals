// This program is written by "Hassan Sardar" roll no."22p-9108".
// This program will calculate the roots and nature of the roots.
#include<stdio.h>
#include<math.h>
int main()
{
int a, b, c, disc;
double r1, r2;
printf("Enter the value of a:");
scanf("%d",&a);
printf("\nEnter the value of b:");
scanf("%d",&b);
printf("\nEnter the value of c:");
scanf("%d",&c);
if(a==0||b==0||c==0)
{
printf("values can't be zero\n");
return 0;
}
else if(a<0||b<0||c<0)
{
printf("values must be greater then 0\n");
return 0;
}
disc=(b*b)-(4*a*c);
if(disc>0)
{
r1=((-b+sqrt(disc))/(2*a));
r2=((-b-sqrt(disc))/(2*a));
printf("The roots are real and unequal\nr1:%f\t r2:%f\n",r1,r2);
}
else if(disc<0)
{
r1=((-b+sqrt(-1*disc))/(2*a));
r2=((-b-sqrt(-1*disc))/(2*a));
printf("The roots are imaginay\nr1:%f\t r2:%f\n",r1,r2);
}
else if(disc==0)
{
r1=r2=-b/(2*a);
printf("The roots are real\nr1:%f\t r2:%f\n",r1,r2);
}
return 0;
}
