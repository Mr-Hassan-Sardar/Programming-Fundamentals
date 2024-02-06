#include<stdio.h>
int main()
{
int kg;
float pound;
printf("enter the quantity in kilograms=");
scanf("%d",&kg);
pound=kg*2.20462;
printf("%d kilograms in pounds are =%f",kg,pound);
return 0;
}