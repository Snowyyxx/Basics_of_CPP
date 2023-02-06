#include<stdio.h>
void add_element(int array[],int length,int element,int target_index, int dummy_array[]);
void print_array(int array[],int length);
int main() {
    int array[]= {10,23,82,19,20};
    int element = 7;
    int length = sizeof(array)/4;

    int dummy_array[length+1];
    int target_index = 4;
    add_element(array,length,element,target_index,dummy_array);
    print_array(dummy_array,length+1);
}

void add_element(int array[],int length,int element,int target_index, int dummy_array[]){
    int dummy_length = length+1;
    for(int i=0;i<target_index;i++){
        dummy_array[i] = array[i];
    }
    dummy_array[target_index]=element;
    // array = 1,2,3,4
    // dummy_array = 1,2,9, , , 
    int j = target_index; // 2
    int k = target_index+1; //3 
    while(j<length){
        if(k<dummy_length){
            dummy_array[k]=array[j];
            k++;
            j++;
        }
        else{
            break;
        }
    }
}
void print_array(int array[],int length){
    for(int i=0;i<length;i++){
        printf("%d,",array[i]);
    }
}