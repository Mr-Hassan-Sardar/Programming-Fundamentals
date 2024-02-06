//This program is written by "Hassan Sardar" roll no. "22p-9108".
//This program will tell us about the winning team .
#include<stdio.h>
int main()
{
int score, wickets;
printf("Enter the score:");
scanf("%d",&score);
printf("Enter the wickets:");
scanf("%d",&wickets);
if(wickets<0) //wickets must be greater then 0.
printf("Wickets must be greater than zero\n"); 
if(score<0) // score must be greater then 0
printf("Score must be greater than zero\n");
if(score>300) // if score is greater then 300 then Pakistan has won 
the match.
printf("Pakistan won by %d Wickets\n",wickets);
else if(score<300&&wickets>0) // if score is less then 300 and there 
are remaining wickets then Pakistan need runs to win.
printf("Pakistan need %d runs to win while having %d wickets\n",300-
score,wickets);
else if(score<300&&wickets==0) // if score is less then 300 and 
there are no remaining wickets then India has won the match.
printf("Pakistan need %d runs with %d wickets\n",300-score,wickets);
else if(score==300&&wickets==0)
printf("Match is draw\n");
return 0;
}