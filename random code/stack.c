#include<stdio.h>

int push(int arr[],int length,int value);
int pop(int arr[],int length);
void print_array(int arr[],int length);

int main(){
    int arr[]={1,2,3,4,5};
    int length = sizeof(arr)/sizeof(arr[0]);
    int a =6;
    pop(arr,length);
    print_array(arr,length);
}

int push(int arr[],int length,int value){
    arr[length+1]=value;
}

void print_array(int arr[],int length){
    for(int i =0;i<length-1;i++){
        printf("%d \n",arr[i]);
    }
}

int pop(int arr[],int length){
    printf("Removed: %d \n",arr[length-1]);
    arr[length-1]=NULL;
}