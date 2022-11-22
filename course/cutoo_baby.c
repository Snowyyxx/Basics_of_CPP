#include<stdio.h>
void print_array(int array[],int length);
int main(){

    int array[]={1,2,3,4,5,6};
    int length = sizeof(array)/4;
    print_array(array,length);
}

void print_array(int array[],int length){

    for (int i =0;i<length;i++){
        printf("%d \n",array[i]);
    }

}