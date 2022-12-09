#include <stdio.h>

int recursive_binary_search(int array[],int start_index,int end_index,int element);

int main(void){
   int array[] = {1, 4, 7, 9, 16, 56, 70};
   int n = 7;
   int element = 9;
   int found_index = recursive_binary_search(array, 0, n-1, element);
   if(found_index == -1 ) {
      printf("Element not found in the array ");
   }
   else {
      printf("Element found at index : %d",found_index);
   }
   return 0;
}

int recursive_binary_search(int array[],int start_index,int end_index,int element){
    int middle_index = (start_index + end_index)/2;
    if(element==array[middle_index]){
        return middle_index;
    }
    if(element>array[middle_index]){
        return recursive_binary_search(array,middle_index+1,end_index-1,element);
    }

    if(element<array[middle_index]){
        return recursive_binary_search(array,start_index+1,middle_index-1,element);
    }
}