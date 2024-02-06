//This program will show the greatest odd number.
// This program is written by "Hassan Sardar" "22p-9108".
#include<stdio.h> // Header file
int main() // main function call
{ //body of main starts
int a, b, c; // defining and declaring the variables of integer 
type.
printf("Enter the first number"); // "printf" function call
scanf("%d",&a); // "scanf" function is 
called
printf("Enter the second number"); // "printf" function call
scanf("%d",&b); // "scanf" function is 
called
printf("Enter the third number"); // "printf" function call
scanf("%d",&c); // "scanf" function is 
called
if(a%2==1&&b%2==1&&c%2==1) //conditional "if" statmen
t
{ // body of "if" starts
if(a>b&&a>c) //conditional "if" statment
{ // body of "if" starts
printf("%d is greatest odd number",a); // "printf" function call
} // body of "if" closed
else if(b>c&&b>a) //conditional "else 
if" statment
{ // body of "else if" starts
printf("%d is greatest odd number",b); // "printf" function call
} // body of "else if" closed
else // conditional "else" statment
{ // body of "else" starts
printf("%d is greatest odd number",c); // "printf" function call
} //body of "else" closed
} // body of "if" closed
else if (a%2==1&&b%2==1&&c%2==0) //conditional "else 
if" statment
{ // body of "else if" starts
if(a>b) //conditional "if" statment
{ // body of "if" starts
printf("%d is greatest odd number",a); // "printf" function call
} // body of "if" closed
else // conditional "else" statment
{ // body of "else" starts
printf("%d is greatest odd number",b); // "printf" function call
} //body of "else" closed
} // body of "else if" closed
else if (a%2==1&&b%2==0&&c%2==1) //conditional "else 
if" statment
{ // body of "else if" starts
if(a>c) //conditional "if" statment
{ // body of "if" starts
printf("%d is greatest odd number",a); // "printf" function call
} // body of "if" closed
else // conditional "else" statment
{ // body of "else" starts
printf("%d is greatest odd number",c); // "printf" function call
} //body of "else" closed
} // body of "else if" closed
else if (a%2==0&&b%2==1&&c%2==1) //conditional "else 
if" statment
{ // body of "else if" starts
if(b>c) //conditional "if" statment
{ // body of "if" starts
printf("%d is greatest odd number",b); // "printf" function call
}
else // conditional "else" 
statment // body of "if" closed
{ // body of "else" starts
printf("%d is greatest odd number",c); // "printf" function call
} //body of "else" closed
} // body of "else if" closed
else if (a%2==1&&b%2==0&&c%2==0) //conditional "else 
if" statment
{ // body of "else if" starts
printf ("%d is the greatest odd number",a); // "printf" function call
} // body of "else if" closed
else if (a%2==0&&b%2==1&&c%2==0) //conditional "else 
if" statment
{ // body of "else if" starts
printf ("%d is the greatest odd number",b); // "printf" function call
} // body of "else if" closed 
else if (a%2==0&&b%2==0&&c%2==1) //conditional "else 
if" statment
{ // body of "else if" starts
printf ("%d is the greatest odd number",c); // "printf" function call
} // body of "else if" closed
else // conditional "else" statment
{ // body of "else" starts
printf("None of them is odd"); // "printf" function call
} //body of "else" closed 
return 0;
} //body of main closed