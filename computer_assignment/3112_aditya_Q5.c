#include<stdio.h>

int main(){
    printf("Name: Aditya Jain, Application Number:3112 \n");

    int age;
    scanf("%d",&age);

    if(age<=3){
        printf("Age:%d\n",age);
        printf("Toddler\n");
        printf("Allowed");
    } else if (age>=4&&age<=12)
    {
        printf("Age:%d\n",age);
        printf("Junior \n");
        printf("Allowed");
    }
    else if (age>=13&&age<=17)
    {
        printf("Age:%d\n",age);
        printf("Teenager\n");
        printf("Not Allowed");
    }
    else{
        
        printf("Age:%d\n ",age);
        printf("Not Allowed");
    
    }
    


}