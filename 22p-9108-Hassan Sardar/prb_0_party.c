//This program is written by "Hassan Sardar"   roll no."22p-9108".

#include<stdio.h>


int div_pizza(int a);      //function named  "div_pizza" declaration.
int div_drink_glass(int b);   // function named  "div_drink_glass" declaration.
float div_amount(int c);      // function named  "div_amount"    declaration.


int main()
{
int n;
printf("n=");
scanf("%d",&n);

printf("each of guests and i'll get %d slices of pizza\n",div_pizza(n));      //function call of "div_pizza".
printf("each of guests and i'll get %d glass of drink\n",div_drink_glass(n));  // function call of "div_drink_glass".
printf("each of guests will pay %.1f pkr\n",div_amount(n));        // function call "div_amount"

return 0;
}


int div_pizza(int a)     // function definition of "div_pizza". it will calculate how many slices will each guest get. 
{
int total_slices=24;   // There are 3 pizza each have 8 slices so there are total 24 slices.

if(a>0 && a<=15)       // codition because guests doesnot exceed 15. 
{
a++;          // because "a" is only no. of guests so in "a" i will also included here.
return total_slices/a;  
}

else if (a==0)  // There is possibility that no one will come.
return total_slices;

else      
return -1;               // If user enter invalid input then it will return -1.

}


int div_drink_glass(int b)    // function definition of "div_drink_glass". it will calculate how many glasses and i'll each get.
{
int total_glasses=15;     // There are 3 1000ml driks each have 5 glasses so there will be total 15 glasses.

if(b>0 && b<=15)              // codition because guests doesnot exceed 15.
{
b++;        // because "b" is only no. of guests so in "a" i will also included here.
return total_glasses/b;
}

else if(b==0)       // There is possibility that no one will come.
return total_glasses;

else
return -1;         // If user enter invalid input then it will return -1.

}


float div_amount(int c)       // function definition of "div_amount". it will calculate how much will each guest pay.
{
int total_amount=5000;

if(c>0 && c<=15)                   // codition because guests doesnot exceed 15.
{
total_amount=total_amount/2;        // Because 50% Paid by me so total amount will be didvided accordingly.     
return total_amount/c;
}


else if(c==0)       
return 0;        // There is possibility that no one will come.

else 
return -1;      // If user enter invalid input then it will return -1.

}
