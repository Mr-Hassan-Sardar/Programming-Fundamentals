#include <stdio.h>
int largest_among(int x,int y,int z);
int main()
{
    int x,y,z;
    printf("Enter first integer x:");
    scanf("%d",&x);
    printf("Enter second integer y:");
    scanf("%d",&y);
    printf("Enter third integer z:");
    scanf("%d",&z);
    printf("%d is the largest among three",largest_among(x,y,z));

    
   
    return 0;
}
int largest_among(int x,int y,int z){
    int largest;
    if(x>y && x>z)
    largest = x;
    else if (y>x && y>z)
    largest = y;
    else
    largest = z;
return largest;
}