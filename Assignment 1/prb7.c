//This program will show the total cost to send international fax.
// This program is written by "Hassan Sardar" "22p-9108" 
#include<stdio.h> // Header file
float fax_amount(int no_of_pages); // FUNCTION DECLARATION
int main() // main function call
{ //body of main starts 
int a; // defining and declaring the variable of integer type.
float b; // defining and declaring the variable of float type.
printf("Enter the no. pages you want to fax"); // "printf" function call
scanf("%d",&a); // "scanf" function is 
called
b=fax_amount(a); //assigning the value to "b"
printf("Total amount of sending international fax is = %0.2f",b); // 
"printf" function call
return 0;
} // body of main closed
float fax_amount(int no_of_pages) //function named "fax_amount" is defining
{ // body of defined function starts
float b, c, d; // defining and declaring the variables of float 
type.
if (no_of_pages>10) //conditional if statement
{ //body of if starts
b=no_of_pages-10; // assigning the value to variable "b"
b=b*0.10; // assigning the value to variable "b"
c=10*0.20; // assigning the value to variable "c"
d=b+c+3; // assigning the value to variable "d"
return d; // returning value of "d" to main function
} //body of if closed
else //conditional else statement
{ // body of else starts
b=no_of_pages*0.20; // assiging the value to variable "b"
c=b+3; // assiging the value to variable "c"
return c; // returning value of "c" to main function
} // body of else closed
} // body of defined function closed
