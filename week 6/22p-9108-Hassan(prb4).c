//This program will show us  survey tally on beverages..
// This program is written by       "Hassan Sardar"     "22p-9108".
 
 #include<stdio.h>
 int main()
 {
 int coffee=0, tea=0, coke=0, orange_juice=0, a;
 
 printf("Choose your favourite beverage from the list\n1.coffee\t2.tea\t3.coke\t4.orange_juice");
 scanf("%d",&a);
 while(a)
 {
 if(a==-1)
break;
a++;
 switch (a)
  {
    case 1:
    coffee++;
    break;
    case 2:
    tea++;
    break;
    case 3:
    coke++;
    break;
    case 4:
    orange_juice++;
    break;            
  }
 }
          printf("%d tea %d coffee %d coke %d juice",coffee,tea,coke,orange_juice);
          return 0;
}
