//This program will show the descriptor of the magnitude of earthquake.
// This program is written by "Hassan Sardar" "22p-9108".
#include<stdio.h> // Header file
int main() //main Function call
{ // main function's body start
float mag; // defining and declaring the variables of float 
type.
printf("enter the magnitude of the earthquake = "); // 
"printf" function call
scanf("%f",&mag); // "scanf" function 
is called
if (mag<2.0) //conditional "if" statment
{ // body of "if" starts
printf("magnitude of\t%0.2f\tis considered as to be 
a\tMICRO\tearthquake",mag); // "printf" function call
} // body of "if" closed
else if(2.0<=mag&&mag<3.0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("magnitude of\t%0.2f\tis considered as to be a\tVERY 
MINOR\tearthquake",mag); // "printf" function call
} // body of "else if" closed
else if(3.0<=mag&&mag<4.0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("magnitude of\t%0.2f\tis considered as to be 
a\tMINOR\tearthquake",mag); // "printf" function call
} // body of "else if" closed
else if(4.0<=mag&&mag<5.0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("magnitude of\t%0.2f\tis considered as to be 
a\tLIGHT\tearthquake",mag); // "printf" function call
} // body of "else if" closed
else if(5.0<=mag&&mag<6.0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("magnitude of\t%0.2f\tis considered as to be 
a\tMODERATE\tearthquake",mag); // "printf" function call
} // body of "else if" closed
else if(6.0<=mag&&mag<7.0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("magnitude of\t%0.2f\tis considered as to be 
a\tSTRONG\tearthquake",mag); // "printf" function call
} // body of "else if" closed
else if(7.0<=mag&&mag<8.0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("magnitude of\t%0.2f\tis considered as to be 
a\tMAJOR\tearthquake",mag); // "printf" function call
} // body of "else if" closed
else if(8.0<=mag&&mag<10.0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("magnitude of\t%0.2f\tis considered as to be 
a\tGREAT\tearthquake",mag); // "printf" function call
} // body of "else if" closed
else if(mag>=10.0) //conditional "else 
if" statment
{ // body of "else if" starts
printf("magnitude of\t%0.2f\tis considered as to be 
a\tMETEORIC\tearthquake",mag); // "printf" function call
} // body of "else if" closed
return 0;
} //main function's body closed