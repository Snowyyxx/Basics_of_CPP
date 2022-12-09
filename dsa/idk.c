#include<stdio.h>
void reverse_array(int array[],int length,int * b);
void print_array(int array[],int length);

int main() {

    int a[]={1,2,3,4,5,6,7,8,9,10};
    int length = sizeof(a)/4;
    int b[length];
    reverse_array(a,length,&b[0]);
    print_array(a,length);
    printf("\n");
    print_array(b,length);
}

void reverse_array(int array[],int length,int * b){
    for(int i=0;i<length;i++){
        *b= array[length-i-1];
        b++;
    }
}

void print_array(int array[],int length){
    for(int i=0;i<length;i++){
        printf("%d,",array[i]);
    }
}