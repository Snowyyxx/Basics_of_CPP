#include<stdio.h>
void rotate_array(int array[],int d,int length,int dummy_array[]);
void copy_array(int * dummy_array,int * array,int length);
void array_swap_elements(int array[],int index_1,int index_2);
void print_array(int array[],int length);
int main(){
    //index: 0 1 2 3 4
int array[]={1,2,3,4,5,6,7,8,9,10,12,23,42};
        // goal:  
int d=4;
int length=sizeof(array)/4;
int dummy_array[length];
copy_array(&dummy_array[0],&array[0],length);
rotate_array(array,d,length,dummy_array);

}

void rotate_array(int array[],int d,int length,int dummy_array[]){                                     
    for(int i=0;i<length;i++){
        if(i-d<0){                      //3+i
            array_swap_elements(array,i,length-d+i);
        }// array: 4,5,3,1,2
        if(i-d>=0){
            array_swap_elements(dummy_array,i,i-d);
        } 
    }   
    
   
    int count=0;
    while(count<d){
        dummy_array[length-1-count]=array[length-1-count];
        count++;
    }
    print_array(dummy_array,length);
    
}


void copy_array(int * dummy_array,int * array,int length){
    int count=0;
    while(count<length){
        *dummy_array=*array;
        dummy_array++;
        array++;
        count++;
    }
}

void array_swap_elements(int array[],int index_1,int index_2){
    int dummy_val;
    dummy_val = array[index_2];
    array[index_2]=array[index_1];
    array[index_1]=dummy_val;

}
void print_array(int array[],int length){
     for(int j=0;j<length;j++){
        printf("%d,",array[j]);
    }
}