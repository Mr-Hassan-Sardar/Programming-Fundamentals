//This program is written by "Hassan Sardar"  roll no."22p-9108".
// This program will show us the encrpted or decrypted values



#include <stdio.h>
void encrypted(char arr[]);
void decrypted(char arr[]);

int main()
{
   int j;
   char str[100];

   printf("\nEnter a string:\t");
   scanf("%s",str);

   printf("\nPlease choose following options:\n");
   printf("Press 1 for Encryption.\n");
   printf("Press 2 for Decryption.\n");
   scanf("%d", &j);
    
    if(j==1)
    encrypted(str);
    else if(j==2)
    decrypted(str);

return 0;
}
   
   
   
   
   
void encrypted(char arr[])
{
 int ch; 
      for( int i = 0; arr[i] != '\0'; ++i)
      {
          ch = arr[i];
            if(ch >= 'a' && ch <= 'z')
            {
               ch = ch +3;
               if(ch > 'z')
               {
                  ch = ch - 'z' + 'a' - 1;
               }
               arr[i] = ch;
            }
           else if(ch >= 'A' && ch <= 'Z')
            {
             ch = ch +3;
             if(ch > 'Z')
               {
                  ch = ch - 'Z' + 'A' - 1;
               }
             arr[i] = ch;
             }
      }

printf("\nEncrypted string: %s\n", arr);
      
  }
  
  
void decrypted (char arr[])
{
int ch;
     for(int i = 0; arr[i] != '\0'; ++i)
     {
        ch =arr[i];
        if(ch >= 'a' && ch <= 'z')
        {
          ch = ch - 3;
          if(ch < 'a')
          {
            ch = ch + 'z' - 'a' + 1;
          }
          arr[i] = ch;
         }
         else if(ch >= 'A' && ch <= 'Z')
         {
         ch = ch -3;
         if(ch < 'A')
         {
           ch = ch + 'Z' - 'A' + 1;
          }
          arr[i] = ch;
          }
      }
printf("\nDecrypted string: %s\n", arr);

}



