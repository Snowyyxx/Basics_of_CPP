//A Heap is a special Tree-based data structure in which the tree is a complete binary tree.
/*
Heapify: a process of creating a heap from an array.
Insertion: process to insert an element in existing heap time complexity O(log N).
Deletion: deleting the top element of the heap or the highest priority element, and then organizing the heap and returning the element with time complexity O(log N).
Peek: to check or find the most prior element in the heap, (max or min element for max and min heap).
max-heap: parent node is always greater than or equal to child node;
*/
#include<stdio.h>

struct node {
    int data;
    struct node* left_node;
    struct node* right_node;
};

int main () {
    
    int array[]={10,8,2,18,16};
    struct node* root_ptr;
    int length =sizeof(array)/4;    

}


struct node* create_node(struct node* node,int data){
    node->data=data;
    node->left_node=NULL;
    node->right_node=NULL;
    return node;
}

struct node* create_tree(int array[],int length,int data){
    struct node* current_node = (struct node*)malloc(sizeof(struct node));
    static int i =0;
    int data = array[i];
    current_node = create_node(current_node,data);
    while(data!=-1&&i<length){
        current_node= current_node->left_node;
        i++;
        current_node = create_node(current_node,array[i]);
    }
    while(i<length)
}

void print_array(int array[],int length){
    for(int i=0;i<length;i++){
        if(i!=length-1){
        printf("%d,",array[i]);
        }
        else{
            printf("%d",array[i]);
        }
    }
}