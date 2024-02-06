#include <stdio.h>
int main()
  {
       int a;
       int b;
       int *pta=&a;
       int *ptb=&b;
       
       
       printf("ENTER YOUR FIRST NUMBER :");
       scanf("%d",pta);
       
       printf("ENTER YOUR SECOND NUMBER :");
       scanf("%d",ptb);
       
       if(*pta>*ptb)
        {
          printf("FIRST NUMBER IS GREATER\n");
        }
       else
        printf("SECOND NUMBER IS GREATER\n");
        
        
       return 0;
  
  
  
  
  
  
  
  
  
  
  }
