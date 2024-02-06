#include<stdio.h>
int main()
{

   int num;
   int limit;
   
   int *ptn=&num;
   int *ptl=&limit;
   
   printf("ENTER NUMBER ");
   scanf("%d",ptn);
   printf("ENTER LIMIT ");
   scanf("%d",ptl);
   
   
   for(int i=1;i<limit+1;i++)
     {
        printf("%d\tX\t%d\t=\t%d\t\n",*ptn,i,i*num);
     }
   







    return 0;
}
