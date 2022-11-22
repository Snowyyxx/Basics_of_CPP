#include<stdio.h>
void array_swap_elements(int*array_ptr,int array[],int index_1,int index_2);
int main(){
    
    int array[]={1,2,3};
    array_swap_elements(&array[0],array,0,2);
    printf("%d",array[2]);


}

void array_swap_elements(int*array_ptr,int array[],int index_1,int index_2){
    int dummy_val;
    dummy_val = array[index_2];
    array[index_2]=array[index_1];
    array[index_1]=dummy_val;

}