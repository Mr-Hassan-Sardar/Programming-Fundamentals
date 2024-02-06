 
//This program will convert temperature from celsius to Fahrenheit.
// This program is written by "Hassan Sardar" "22p-9108" 
#include<stdio.h> // Header file
float celsiusToFahrenheit(int celsius); //Function 
named "celsiusToFahrenheit" declaration
int main() //main Function call
{ // main function's body start 
int a; //variable "a" is define and declared with 
integer type
float b; //variable "b" is define and declared 
with integer type
printf("enter the temperature in Celsius"); // 
"printf" function call
scanf("%d",&a); // "scanf" function 
is called
b=celsiusToFahrenheit(a); // Function 
named "celsiusToFahrenheit" called and assigning value of function 
to variable "b" 
printf("%d in Fahrenheit is %0.2f",a,b); // "printf" 
function is called
return 0; 
} // main function's body 
closing
float celsiusToFahrenheit(int celsius) // Function 
named "celsiusToFahrenheit" defining
{ 
float a=1.8; // body starts
float b; //variable "b" is define and 
declared with integer type
b=(celsius*a)+32; // assigning value to "b" after some 
calculations 
return b; // returning value of b to main
} // bodyclosed
