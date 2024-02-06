//This program will count the number of digits enter by user.
// This program is written by       "Hassan Sardar"     "22p-9108".

#include<stdio.h>

int main()
{
int number;
printf("Enter the  number=");
scanf("%d",&number);

int i=0;
while(number>0)
{
number=number/10;
i++;

}
printf("length:%d",i);

return 0;
}


