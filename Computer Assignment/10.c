#include<stdio.h>

int main(){

    int roll_no,marks;
    char name[100];
    printf("Enter Roll Number of Student:");
    scanf("%d",&roll_no);
    printf("Enter marks obtained by Student:");
    scanf("%d",&marks);
    printf("Enter Name of student:");
    scanf("%s",name);

    int value = marks/10;
    printf("Grade Details:");
    if(value<=3){
        printf("%d \t %d",roll_no,marks);
        printf("%s\t",name);
        printf("\t FAIL");
    } else if (value>3&&value<=5)
    {   printf("%d \t %d",roll_no,marks);

        printf("%s \t",name);
        printf("\t C");
    } else if (value>5&&value<=8)
    {
        printf("%d \t %d",roll_no,marks);
        printf("\t %s",name);
        printf("\t B");
    }
    else if (value>8&&value<=10)
    {
        printf("%d \t %d",roll_no,marks);
        printf("%s \t",name);
        printf("\t A");
    }
    
    
}