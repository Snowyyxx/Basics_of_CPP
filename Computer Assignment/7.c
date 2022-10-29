#include<stdio.h>
int sum_of_digits(int number);
int prime_factors(int number,int array[]);
int sum_of_array(int array[],int length);
int print_array(int array[],int length);
int main(){
    int num=85;
    //printf("Enter Number: ");
    //scanf("%d",&num);
    int num_sum = sum_of_digits(num);
    int prime_array[]={};
    prime_factors(num,prime_array);
    int size_array = sizeof(prime_array);
    int prime_sum;
    prime_sum = sum_of_array(prime_array,(size_array)/4);
    prime_sum = prime_sum-num;
    if(num_sum==prime_sum){
        printf("%d is a Smith Number",num);
    }else{printf("%d is not a Smith Number",num);} 
    
}

int sum_of_digits(int number){
    int sum=0;
    while(number>0){
        sum=sum + number%10;
        number=number/10;
    }
    return sum;
}

int prime_factors(int number,int array[]){
    int z,count=0;
    for(int i=2; i<=number; i++)
    {
        /* Check 'i' for factor of num */
        if(number%i==0)
        {
            /* Check 'i' for Prime */
            z = 1;
            for(int j=2; j<=i/2; j++)
            {
                if(i%j==0)
                {
                    z = 0;
                    break;
                }
            }
            /* If 'i' is Prime number and factor of num */
            if(z==1)
            {
               array[count]=i;
              // printf("%d \n",array[count]);
               count++;
                }
            }
        }
    }

int sum_of_array(int array[],int length){
    int prime_sum=0;
    int d=0;
    for(int i =0;i<length;i++){
        d = sum_of_digits(array[i]);
        prime_sum=prime_sum+d;
    }
    return prime_sum;
}

int print_array(int array[],int length){
    for(int i=0;i<length;i++){
        printf("%d \n",array[i]);
    }
}

