#include<stdio.h>
void next_number(int n,int num1,int num2,int count);
int main(){
    int n=10,num1=0,num2=1;
    printf("%d\n",num1);
    printf("%d \n",num2);
    int count=0;
    next_number(n,num1,num2,count);

}   

void next_number(int n,int num1,int num2,int count){
    while(count<n+1){
        printf("%d\n",num1+num2);
        next_number(n,num2,num1+num2,count+1);
        break;
    }
}