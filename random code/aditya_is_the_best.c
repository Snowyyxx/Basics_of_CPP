#include<stdio.h>
int reverse_array(int *pointer_m,int *pointer_r);
int main () {
    int main_array[]={1,2,3};
    int reversed_array[]={};
    int *main_pointer=&main_array[0];
    int *reversed_pointer=&reversed_array[0];
    reverse_array(main_pointer,reversed_pointer);
}

int reverse_array(int *pointer_m,int *pointer_r){
    for(int i =3;i>=0;i--){
        int *val = pointer_m+i;
        *pointer_r= *val;
    }
    for (int i =0;i<4;i++){
        printf("%d",*pointer_r);
        pointer_r++; 
    }
 
}