
// This program will check if the number inputted by the user is odd or even using bit operator.


#include<stdio.h>

int main(){
    printf("Name: Aditya Jain, Application Number:3112 \n");
    int num;
    printf("Please enter a number: ");
    scanf("%d",&num);
    if(num&1==1){
        printf("Number you entered is Odd");
    }else{
        printf("Number you entered is Even");
    }
    
}