#include<stdio.h>
int main(){
    int arr[2];
    int length_array=2;
    int n_digits =1;
    int right_array[n_digits];
    int main_array[]={1,6};
    int leave = length_array-n_digits; //
    int count=0;
    for(int i =length_array-1;i>leave-1;i--){
        right_array[count]=main_array[i];
        count++;
    }



}