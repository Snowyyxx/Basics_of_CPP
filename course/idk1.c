#include<stdio.h>
void print_array(int * ptr,int len_array);
void print(int array[],int length);
int main(){
    int array[] = {1,2,3,4,5};
    int * ptr;
    ptr = &array[0];

    int length = sizeof(array)/4;
    print_array(ptr,length);
    print(array,length);
}

void print_array(int * ptr,int len_array){
    for(int i =1;i<len_array+1;i++){
        printf("%d \n",*ptr);
        ptr++;
    }
}

void print(int array[],int length){
    int count= 0 ;
    while(count<length){
        printf("%d",array[count]);
        count++;
    }
}

