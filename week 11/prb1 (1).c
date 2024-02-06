//This program is written by "Hassan Sardar"  roll no."22p-9108".
// This program will show us that whether the given string is plaindrome or not.

#include<stdio.h>
#include<string.h>
 int main()
{
 char arr[20];
 int a, count=0;
 printf("Enter your name:");
 scanf("%s",arr);
 a=strlen(arr);
for(int i=0;i<a;i++)
 {
    if (arr[i] != arr[a- i - 1])
    {
      count++;
    }
 }
 if(count!=0)
 {
 printf("Your name is not plaindrome\n");
 }
 else
 {
 printf("Your name is  plaindrome\n");
 }
 
return 0;
}
