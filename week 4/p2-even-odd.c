#include <stdio.h>
int main()
{
    int x;
    printf("Enter first integer x:");
    scanf("%d",&x);
    if(x%2)
        printf("%d is odd",x);
    else
        printf("%d is even",x);
    return 0;
}
