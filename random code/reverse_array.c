#include<stdio.h>

int reverse_array(int *pointer,int*pointer_rev);

int main () {
   int array[]= {1,2,3,4};
   int rev_array[] ={};
   int *ptr = &array[0];
   int *ptr_rev=&rev_array[0];
   reverse_array(ptr,ptr_rev);
}

int reverse_array(int *pointer,int *pointer_rev){
    printf("%d%d",*pointer,*pointer);
}
