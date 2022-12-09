#include<stdio.h>

int bubble_sort(int array[],int length);
void print_array(int array[],int length);
int swap_elements(int array[],int index_1,int index_2);

int main(){
    int array[]={1,0,22,13,9,8};
    int length = sizeof(array)/4;
    bubble_sort(array,length);
    print_array(array,length);
}

int bubble_sort(int array[],int length){

    while(1)
    {   int no_of_swaps =0;
    
        for(int i =0;i<length;i++){
            if(i+1!=length){
                if(array[i]>array[i+1]){
                    swap_elements(array,i,i+1);
                    no_of_swaps++;
                }
            }
        }

        if(no_of_swaps==0){
            break;
        }

    }
    

}

int swap_elements(int array[],int index_1,int index_2){
    int temp;
    temp = array[index_1];
    array[index_1]=array[index_2];
    array[index_2]= temp;
}

void print_array(int array[],int length){
    for(int i =0;i<length;i++){
        printf("%d,",array[i]);
    }
}