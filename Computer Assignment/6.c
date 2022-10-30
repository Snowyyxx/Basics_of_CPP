#include<stdio.h>
#include<math.h>
int number_of_digits(int number);
int return_power_of_ten(int number);

int main(){
    printf("Name: Aditya Jain, RollNo:3112 \n");

    int k;
    printf("Enter A Number:");
    scanf("%d",&k);
    int digits_k = number_of_digits(k); // Number of digits in given number
    int k_sqr = k*k;
    int digits_k_sqr = number_of_digits(k_sqr); // Number of digits in square of number
    int sum_right=0,sum_left=0;
    int sum_right_pow = return_power_of_ten(digits_k);
    int leave = digits_k_sqr-digits_k;
    int sum_left_pow = return_power_of_ten(digits_k);
    sum_right = k_sqr%sum_right_pow;
    sum_left = k_sqr/sum_left_pow;
    int sum = sum_left+sum_right;
    if(sum==k){
        printf("Kaprekar Number");
    } else{
        printf("Not A Kaprekar Number");
    } 

}
int return_power_of_ten(int number){
    int value=1;
    for(int i =0;i<number;i++){
        value = value*10;
    }
    return value;
}

int number_of_digits(int number){
    int count=0;
    while(number>0){
        count++;
        number = number/10;
    }
    return count;

}
