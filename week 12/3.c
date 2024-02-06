#include<stdio.h>
int main()
  { 
    char filename[]="text.txt";
    FILE *ptr=fopen("text.txt","w");

    if (ptr==NULL)
    {
      printf("ERROR");
      return 1;
    }
      char arr1[]="NAME : Hassan Sardar";
      char arr2[]="ROLL NO : 22p-9108";
      char arr3[]="CGPA : 2";
        
        fprintf(ptr,"%s\n",arr1);
        fprintf(ptr,"%s\n",arr2);
        fprintf(ptr,"%s\n",arr3);
      
      

    

  
    



    return 0;

  }
