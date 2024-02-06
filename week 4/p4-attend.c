#include <stdio.h>

void calculate_attendance(int total_classes,int attended){
   float percent = ((attended/(float)total_classes)) * 100;
    printf("Your attendance is: %.2f\n",percent);
    if(percent>80){
        printf("You are allowed to sit in the exam\n");
    }
    else{
        printf("You are not allowed to sit in the exam\n");
    }
}

int main()
{
    int total_classes,attended;
    printf("Enter total classes scheduled:");
    scanf("%d",&total_classes);
    printf("Enter total classes attended:");
    scanf("%d",&attended);
    calculate_attendance(total_classes,attended);
    
}
