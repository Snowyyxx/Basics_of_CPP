#include<stdio.h>
int factorial(int num);

int main(){

    int x=6;
    int x_fact = factorial(x);
    printf("%d",x_fact);
}

int factorial(int num){
    
    while(num>1){
        num = num*factorial(num-1);
        break;
}
    return num;

}