#include<stdio.h>
int main()
{
int a , b , ans;
printf("enter the value of a =");
scanf("%d",&a);
printf("enter the value of b =");
scanf("%d",&b);
ans=(a*a*a)-(b*b*b)-3*a*b*(a-b);
printf("Result =%d",ans);
return 0;
}
