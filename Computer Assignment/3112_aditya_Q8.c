#include<stdio.h>
int main(){
    printf("Name: Aditya Jain, Application Number:3112 \n");

    int user_id,units,total_cost=0;
    char user_name[100];
    printf("Enter the user id of user:");
    scanf("%d",&user_id);
    printf("Enter the name of user:");
    scanf("%s",&user_name);
    printf("\n");
    printf("Enter the number of units consumed by user: ");
    scanf("%d",&units);
    if(units<=100){
        total_cost=units*1;
    }
    else if (units>100&&units<=300)
    {
        total_cost = units*2;
    }
    else if(units>300){
        total_cost=units*3;
        }
    
    if (total_cost>1000){
        total_cost=1.15*total_cost;
    }

    printf("Charge Details:%d \t",user_id);
    printf("%s \t",user_name);
    printf("%d \t",total_cost);
}