//This program is written by "Hassan Sardar" roll no. "22p-9108".
//This program will tell us the appropriate seminar fee.
#include<stdio.h>
int main()
{
char membership;
int age;
printf("Please enter your age:");
scanf("%d",&age);
printf("please enter your membership status M for member and N for 
non-member:");
scanf("\n%c",&membership);
if(membership=='n'||membership=='N')
printf("\nyour fee is 20$\n");
else if(membership=='M'||membership=='m')
{
if(age<65)
printf("\nyour fee is 10$\n");
else if(age>=65)
printf("\nYour fee is 5$ \n");
}
return 0;
}
