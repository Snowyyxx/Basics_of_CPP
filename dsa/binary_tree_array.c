/* In an array: if the node is at ith index:
1) left node is at (2*i +1) 
2) right node is at (2*i+2) 
3) parent of ith node would be at |(i-1)/2| */

// valid when starting index of array is 0;
#include<stdio.h>
void print_array(int array[],int length);
int array_binary_tree(int array[]);

int main() {
    int array[]={};
    array_binary_tree(array);
    int length = sizeof(array)/4;
    print_array(array,length);
}

int array_binary_tree(int array[]){
    static int i=0;
    int data;
    static int count =0;

    if(count==0){
        printf("Enter Data: ");
        count++;
    }
    scanf("%d",&data);
    if(data==-1){
        return 0;
    }
    else{
        array[i]=data;
        printf("Enter Data for left node of %d: ",data);
        i=2*i+1;
        array_binary_tree(array);
        printf("Enter data for right node of %d: ",data);
        i=2*i+2;
        array_binary_tree(array);
    }

}

void print_array(int array[],int length){
    for(int j =0;j<length;j++){
        printf("%d,",array[j]);
    }
}