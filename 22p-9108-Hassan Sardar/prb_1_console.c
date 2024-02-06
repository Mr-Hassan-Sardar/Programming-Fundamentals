//This program is written by "Hassan Sardar"   roll no."22p-9108".

#include<stdio.h>

int main()
{
int budget=0;
char type;
int count=0;
int b=0;

printf("Enter your budget:");
scanf("%d",&budget);

if(budget<200)
{
printf("your budget is too low\n");
return 0;
}

while(budget>=200)   // if budget is greater than 200 than it will run.
{

printf("\nPlease Select Ice cream type:\n1.cone\n2.cup\n For cone enter  1  and for cup enter  2 \n");
scanf("\n%c",&type);

if(type=='1')      // For cone type.
{
char cont;
char flav;
int a;
printf("please select flavour:\n 1.choclate\t200Rs.\n2.Vanilla\t250Rs.\n3.Strawberry\t200Rs.\n4.oreo\t\t250Rs.\n");
printf("for chocolate enter 1\t for vanilla enter 2\t for strawberry enter 3\t for oreo enter 4\n");
scanf("\n%c",&flav);

   if(flav=='1')  // if user select choclate flavour.
    {
    budget=budget-200;
    printf("\nyou choose CONE type of CHOCLATE flavour and your remaining budget is %d",budget);
    count++;
   a=200;
    }
    else if(flav=='2')   // if user select vanilla flavour.
    {
    budget=budget-250;
    printf("you choose CONE type of VANILLA flavour and your remaining budget is %d",budget);
    count++;
    a=250;
    }
    else if(flav=='3')  // if user select strawberry flavour.
    {
    budget=budget-200;
    printf("you choose CONE type of STRAWBERRY flavour and your remaining budget is %d",budget);
    count++;
    a=200;
    }
    else if(flav=='4')   // if user select oreo flavour.
    {
    budget=budget-250;
    printf("you choose CONE type of OREO flavour and your remaining budget is %d",budget);
    count++;
    a=250;
    }
    else
    printf("-1");
b=b+a;
 
    if(budget>=200)   // this will ask user whether user want to continue shopping or not.
    {
     printf("\nIf you want to continue shopping\tenter 1 if you dont enter 2\n");   
     scanf("\n%c",&cont);
         
          if(cont=='2')
          break;
    }
    
    
    
}

else if(type=='2')   // For cup type.
{
char flav;
char size;
char cont;
int a;
printf("please select flavour:\n 1.choclate\n2.Vanilla\n3.Strawberry\n4.oreo\n");
printf("for chocolate enter 1\t for vanilla enter 2\t for strawberry enter 3\t for oreo enter 4\n");
scanf("\n%c",&flav);


   if(flav=='1')    //for choclate flavour.
    {
     printf("\nNow select size:\n1.small 200RS.\t2.medium 250RS.\t3.large 300RS.");
     printf("\nFor small Enter 1  For Medium Enter 2  For large Enter 3\n");
     scanf("\n%c",&size);
         if(size=='1')   // for small size.
           {
           budget=budget-200;
           printf("\nyou choose CUP type of CHOCLATE flavour of small size and your remaining budget is %d\n",budget);
           a=200;
           }
         else if(size=='2')  // for medium size.
         {
         budget=budget-250;
         printf("\nyou choose CUP type of CHOCLATE flavour of medium size and your remaining budget is %d\n",budget);  
         a=250;
         }  
         else if(size=='3')   // for large size.
         {
         budget=budget-300;
         printf("\nyou choose CUP type of CHOCLATE flavour of large size and your remaining budget is %d\n",budget);    
         a=300;
         } 
         else
         printf("-1");
 
 b=b+a; 
 count++;
      if(budget>=200)     // this will ask user whether user want to continue shopping or not.
      {
        printf("\nIf you want to continue shopping\t enter 1 if you dont enter 2\n");   
        scanf("\n%c",&cont);
         
             if(cont=='2')
              break;
     }
   }

   else if(flav=='2')   // for vanilla flavour.
    {
     printf("\nNow select size:\n1.small 250RS.\t2.medium 300RS.\t3.large 350RS.");
     printf("\nFor small Enter 1  For Medium Enter 2  For large Enter 3\n");
     scanf("\n%c",&size);
         if(size=='1')   // for small size.
          {
           budget=budget-250;
           printf("\nyou choose CUP type of VANILLA flavour of small size and your remaining budget is %d\n",budget);
           a=250;
          }
         else if(size=='2')   // for medium size.
          {
           budget=budget-300;
           printf("\nyou choose CUP type of VANILLA flavour of medium size and your remaining budget is %d\n",budget);  
          a=300;
          }  
          else if(size=='3')  // for large size.
          {
           budget=budget-350;
           printf("\nyou choose CUP type of VANILLA flavour of large size and your remaining budget is %d\n",budget);    
          a=350;
          } 
          else
          printf("-1");

b=b+a;
count++;
      if(budget>=200)      // this will ask user whether user want to continue shopping or not.
      {
       printf("\nIf you want to continue shopping\t enter 1 if you dont enter 2\n");   
       scanf("\n%c",&cont);    
    
           if(cont=='2')
            break;         
     }
   }
    else if(flav=='3')   // for strawberry flavour.
    {
     printf("\nNow select size:\n1.small 250RS.\t2.medium 300RS.\t3.large 350RS.");
     printf("\nFor small Enter 1  For Medium Enter 2  For large Enter 3\n");
     scanf("\n%c",&size);
         
         if(size=='1') // for small size.  
          {
          budget=budget-200;
          printf("\nyou choose CUP type of   STRAWBERRY  flavour of small size and your remaining budget is %d\n",budget);
          a=200;
          }
         else if(size=='2')  // for medium size.
         {
          budget=budget-250;
          printf("\nyou choose CUP type of   STRAWBERRY   flavour of medium size and your remaining budget is %d\n",budget);  
         a=250;
         }  
         else if(size=='3')  // for large size.
         {
           budget=budget-300;
           printf("\nyou choose CUP type of  STRAWBERRY   flavour of large size and your remaining budget is %d\n",budget);    
         a=300;
         } 
         else
         printf("You entered Wrong Size!");

b=b+a;
count++;
         if(budget>=200)      // this will ask user whether user want to continue shopping or not.         
         {
            printf("\nIf you want to continue shopping\t enter 1 if you dont enter 2\n");   
            scanf("\n%c",&cont);    
               
               if(cont=='2')
               break; 
          }       
     }
     
    else if(flav=='4')  // for oreo flavour.
    {
     printf("\nNow select size:\n1.small 250RS.\t2.medium 300RS.\t3.large 400RS.");
     printf("\nFor small Enter 1  For Medium Enter 2  For large Enter 3\n");
     scanf("\n%c",&size);
         
         if(size=='1')   // for small size.   
           {
           budget=budget-250;
           printf("\nyou choose CUP type of   OREO  flavour of small size and your remaining budget is %d\n",budget);
           a=250;
           }
         else if(size=='2')   // for medium size.
           {
          budget=budget-300;
          printf("\nyou choose CUP type of   OREO   flavour of medium size and your remaining budget is %d\n",budget);  
           a=300;
           }  
         else if(size=='3')   // for large size.
          {
           budget=budget-400;
           printf("\nyou choose CUP type of  OREO   flavour of large size and your remaining budget is %d\n",budget);    
          a=400;
          } 
        else
          printf("-1");

b=b+a;
count++; 
        if(budget>=200)   // this will ask user whether user want to continue shopping or not.
         {         
           printf("\nIf you want to continue shopping\t enter 1 if you dont enter 2\n");   
           scanf("\n%c",&cont);    
                if(cont=='2')
                break;          
          }
     }
    
 }
 else
printf("-1");


 }

printf("you have selected %d items and your total price is %d rupees\n ",count,b);
return 0;
}
   
