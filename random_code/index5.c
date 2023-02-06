#include<stdio.h>

int reverse_array(int *pointer,int *pointer_rev);
int print_array(int *pointer);

int main ()  {

    int arr[] = {0,1,2,3,4};
    int *ptr = &arr[0];
    int arr_rev[]= {};
    int *ptr_rev = &arr_rev[0]; 
    /*
    *ptr_rev = reverse_array(ptr,ptr_rev);
   
    printf("reversed array:%d",print_array(ptr_rev)); */
    
}

int reverse_array(int *pointer,int *pointer_rev){
    for (int i =4;i>=0;i--){
        pointer_rev = pointer +i;
        printf("%d",*pointer_rev);
    }
   
}

 