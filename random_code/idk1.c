#include <stdio.h>

int recursive_binary_search(int array[],int start_index,int end_index,int element);

int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int num_elem = 7;
   int element = 15;
   int found_index = recursive_binary_search(array, 0, num_elem-1, element);
   if(array[found_index]=element) {
      printf("Element found at index : %d",found_index);
   }
   else {
      printf("Element not found at index");
   }
   return 0;
}

int recursive_binary_search(int array[],int start_index,int end_index,int element){
    int middle_index = (start_index + end_index)/2;
    if(element==array[middle_index]){
        return middle_index;
    }
    if(element>array[middle_index]){
        return recursive_binary_search(array,middle_index+1,end_index,element);
    }

    if(element<array[middle_index]){
        return recursive_binary_search(array,start_index,middle_index-1,element);
    }
}