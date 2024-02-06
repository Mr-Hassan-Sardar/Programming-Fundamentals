//This program is written by "Hassan Sardar"  roll no."22p-9108".
// This program will show us the value in string according to user'

#include<stdio.h>
#include<string.h>
 int main()
{
 char arr[50], a, b, con[50];
 int vcount=0, co_count=0;
 
 printf("Enter the string:");
 scanf("%s",arr);

 b=strlen(arr);

 for(int i=0; ;i++)
 {
 printf("A) Count the number of vowels in the string.\nB) Count both the vowels and consonants in the string\nC) Display the most frequent character in the   string.\nD) Concatenate another string with the existing string.\nE) Exit the program.\n");
 scanf("\n%c",&a);
 
 if(a=='A'||a=='a')
 {
   vcount=0;
   for(int i=0;i<b;i++)
     {   
       if (arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'i' || arr[i] == 'I' || arr[i] =='o' || arr[i]=='O' || arr[i] == 'u' || arr[i] == 'U')
         {
            vcount++;
      
         }
     }
   printf("Vowels in string are%d\n",vcount);
 }
 else if(a=='B'||a=='b')
  {
      vcount=0;
      co_count=0;
        for(int i=0; i<b;i++)
          {
 
               if (arr[i] == 'a' || arr[i] == 'A' || arr[i] == 'e' || arr[i] == 'E' || arr[i] == 'i' || arr[i] == 'I' || arr[i] =='o' || arr[i]=='O' || arr[i] == 'u' || arr[i] == 'U')
                  vcount++;
              else
                  co_count++;
          }
 printf("Vowels are%d and Consonants are%d \n",vcount,co_count);
 }
 else if(a=='D'||a=='d')
  {    
    printf("Enter the Array:");
    scanf("%s",con);
    strcat(arr,con);
    printf("your string is %s\n",arr);
  }
  else if(a=='E'||a=='e')
  {
  return 0;
  }
  
 else if(a=='C'||a=='c')
 {
 co_count=0;
 for(int i=0;i<b;i++)
 {
 vcount=0;
   if(arr[i]==arr[i+1])
   {
     vcount++;
   }
 if(vcount>co_count)
 {
 co_count=vcount;
 printf("most frequent charcter is %c\n",arr[i]);
 }
}
}
}

return 0;
}
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
     
