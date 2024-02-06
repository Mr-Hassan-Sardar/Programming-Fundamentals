#include<stdio.h>
int main()
{
int sec , days , hours , min;
printf("enter the seconds you want to convert = ");
scanf("%d",&sec);
days=sec/86400;
sec=sec%86400;
hours=sec/3600;
sec=sec%3600;
min=sec/60;
sec=sec%60;
printf("%d days %d hours %d minutes %d seconds",days,hours,min,sec);
return 0;
}