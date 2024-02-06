#include<stdio.h>
int main()
{
int seconds , hours , min;
printf("enter seconds you want to convert=");
scanf("%d",&seconds);
hours=seconds/3600;
seconds=seconds%3600;
min=seconds/60;
seconds=seconds%60;
printf("%d hours %d minutes %d seconds",hours,min,seconds);
return 0;
}
