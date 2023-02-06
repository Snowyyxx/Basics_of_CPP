#include<stdio.h>


int main(){

    int num;
    printf("Enter Number:");
    scanf("%d",num);
    int num_sqr=num*num;
    //finding n:
    int a=num,num_digits=0;
    while(a>0){
        num_digits++;
        a=a/10;
    }
    int c=num_sqr,num_sqr_digits=0;
    while(c>0){
        num_sqr_digits++;
        c=c/10;
    }
    int b=num_sqr;
    int num_sqr_arr[num_digits];
    //adding num_sqr to array:
    for(int i =num_sqr_digits-1;i>=0;i--){
        num_sqr_arr[i] = b%10;
        b=b/10;
    }
    int leave = num_sqr_digits-num_digits;
    int num_left[leave];
    int num_right[num_digits];
    int index=0;
    for(int j=0;j<leave;j++){
      num_left[index]=num_sqr_arr[j];
      index++;
    }
    index=0;
    for(int j=leave;j<=num_sqr_digits;j++){
        num_right[index]=num_sqr_arr[j];
        index++;
    }

    for(int i =0;i<num_sqr_digits;i++){
        printf("%d \n",num_sqr_arr[i]);
    }




}
