//This program will show the Boxes and the number of containers to ship.
// This program is written by "Hassan Sardar" "22p-9108" 
#include<stdio.h> // Header file
int main() // Main function call
{ // main function's body start
int a, b, c, d, e, f, g; // defining and declaring the variables 
of integer type.
printf("Enter the total no. of cookies = "); // "printf" function call
scanf("%d",&a); //"scanf" function call
printf("Enter the no. of cookies in the box = "); // "printf" function 
call
scanf("%d",&b); //"scanf" function call
printf("Enter the no. of cookie boxes in the container = "); //
"printf" function call
scanf("%d",&c); //"scanf" function call
d=a/b; // assigning the value to variable "d"
e=a%b; // assigning the value to variable "e"
f=d/c; // assigning the value to variable "f"
g=d%c; // assigning the value to variable "g"
printf("No. of Boxes=%d\n",d); // "printf" function call
printf("No. of cookies leftover=%d\n",e); // "printf" function call
printf("No. of containers=%d\n",f); // "printf" function call
printf("No. of boxes leftover=%d\n",g); // "printf" function call
return 0;
} // main function's body closed