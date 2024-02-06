//This program will check whether the given year is leap or not.
// This program is written by "Hassan Sardar" "22p-9108".
#include<stdio.h> // Header file
int Leap(int a); //Function named "Leap" declaration
int main() //main Function call
{ // main function's body start 
int year; //variable "year" is define and declared with 
integer type
printf("Enter the year you want to check="); // 
"printf" function call
scanf("%d",&year); // "scanf" function 
is called
Leap(year); // Function 
named "Leap" called
return 0;
} // main function's body closing
int Leap(int a) // Function named "Leap" defining
{ // body of function 
named "Leap" starts
if (a%4==0&&a%100!=0) //conditional "if" statment
{ // body of "if" starts
printf("%d is a leap year",a); //printf function will execute 
only when condition of "if" is true
} // body of "if" closed
else if (a%400==0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("%d is a leap year",a); // printf function will 
execute only when condition of "else if" is true
} // body of "else if" closed
else // conditional "else" statment
{ // body of "else" starts
printf("%d is not leap year",a); //printf function inside 
the body of "else" will execute only when condition 
of "if" and "else if" is false
} //body of "else" closed
} // body of function 
named "Leap" closed