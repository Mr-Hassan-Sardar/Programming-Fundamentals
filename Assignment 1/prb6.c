//This program will show whether the triangle is equilateral ,isoceles or 
scalene.
// THIS PROGRAM IS WRITTEN BY "HASSAN SARDAR" "22P-9108".
#include<stdio.h> // Header file
int chk_triangle(); //function declaration
int main() // main function call
{ // body of main starts
chk_triangle(); // function call 
return 0;
} // body of main closed
int chk_triangle() // function defining
{ //body of defined function starts
float a, b, c; // defining and declaring the variables of float 
type.
printf("Enter the first side of the triangle="); // "printf" function 
call
scanf("%f",&a); // "scanf" function is 
called
printf("Enter the second side of the triangle="); // "printf" function 
call
scanf("%f",&b); // "scanf" function is 
called
printf("Enter the third side of the triangle="); // "printf" function 
call
scanf("%f",&c); // "scanf" function is 
called
if(a==b&&a==c) //conditional "if" statment
{ // body of "if" starts
printf("This is the Equilateral triangle"); // "printf" function call
} // body of "if" closed
else if(a==b&&a!=c) //conditional "else 
if" statment
{ // body of "else if" starts
printf("This is the isosceles triangle"); // "printf" function call
} // body of "else if" closed
else if(a==c&&c!=b) //conditional "else 
if" statment
{ // body of "else if" starts
printf("This is the isosceles triangle"); // "printf" function call
} // body of "else if" closed
else if(b==c&&b!=a) //conditional "else 
if" statment
{ // body of "else if" starts
printf("This is the isosceles triangle"); // "printf" function call
} // body of "else if" closed
else // conditional "else" statment
{
printf("This is the scalene triangle"); // "printf" function call
} //body of "else" closed
} // body of Defined function close