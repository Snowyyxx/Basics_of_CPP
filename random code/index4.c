#include<stdio.h>
//2D Arrays:
void count_odd(int *pointer);
int main () {

    int arr[] = {0,1,2,3,4,5};
    /*int size = sizeof(arr);
    printf("size of array:%d \n",size);*/
    int *ptr = &arr[0];
    count_odd(ptr);
    
}

void count_odd(int *pointer){
    for(int i =1;i<=6;i++){
        printf("%d",*pointer);
        pointer++;
    }
}