#include <stdio.h>
int main()
{
    int x,y;
    printf("Enter first integer x:");
    scanf("%d",&x);
    printf("Enter second integer y:");
    scanf("%d",&y);
    
    if(x>y)
    printf("First integer %d is greater than second %d",x,y);
    else
    printf("Second integer %d is greater than First %d",y,x);
    return 0;
}
