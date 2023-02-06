#include<stdio.h>

int BinarySearch(int array[],int first_index,int last_index, int element);

int main (){
                // 0 1 2 3 4 5 6    
    int array[] = {1,2,3,4,5,6,7};
    int element = array[5]; // 6
    int first_index = 0;
    int last_index = (sizeof(array)/4)-1;
    int index_element = BinarySearch(array,first_index,last_index,element);
    printf("%d",index_element);
}


int BinarySearch(int array[],int first_index,int last_index,int element){
    
    int middle_index = (first_index+last_index)/2; // 0+6/2 = 3
    
    if(array[middle_index]==element){
        return middle_index;
    }

    else if (array[middle_index]>element){
        return BinarySearch(array,first_index,middle_index-1,element);
    } 

    else if (array[middle_index]<element){
        return BinarySearch(array,middle_index+1,last_index,element);
    }





}