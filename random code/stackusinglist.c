#include<stdio.h>

int push(int arr[],int length,int value);
void pop(int arr[],int length);
void print_array(int arr[],int length);

int main(){
    
    int a =6,b=7;
    
    int arr[]={1,2,3,4,5};

    int length =sizeof(arr)/sizeof(arr[0]);
    printf("Array before push:");
    print_array(arr,length);
    arr = push(arr,length,a);

    length =sizeof(arr)/sizeof(arr[0]);
    printf("Array after push");
    print_array(arr,length);
    pop(arr,length);
    
    length =sizeof(arr)/sizeof(arr[0]);
    printf("Array after pop:");
    print_array(arr,length);

}

int [] push(int arr[],int length,int value){
    arr[length]=value;
    return arr;
}

void print_array(int arr[],int length){
    for(int i =0;i<length;i++){
        printf("%d \t",arr[i]);
    }
}

void pop(int arr[],int length){
    printf("Removed: %d \t",arr[length-1]);
    arr[length-1]=-999;
}

