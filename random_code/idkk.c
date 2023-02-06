#include<stdio.h>
#include<stdlib.h>
// stack implementation: using linked list; 
// STACK -> LIFO AND QUEUE -> FILO

void pull(int array[],int *length, int dummy_array[]);
void print_array(int array[],int length);


int main()
{
        int array[] ={1,2,3};
        int length = sizeof(array)/4;
        int dummy_array[length];
        pull(array,&length,dummy_array);
        print_array(array,length);
}

void print_array(int array[],int length){
    for(int i=0;i<length;i++){
        printf("%d ",array[i]);
    }
}

void pull(int array[],int *length, int dummy_array[]){
    for(int i=0;i<*length;i++){
        if(i!=*length-1){
            dummy_array[i]=array[i];
        }
    }
    array=dummy_array;
    *length=*length-1;
}