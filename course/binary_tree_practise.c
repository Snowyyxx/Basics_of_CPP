#include<stdio.h>
#include<stdlib.h>

void print_binary_tree(struct node* root_ptr);
struct node* create();

struct node {
    struct node* left;
    struct node* right;
    int data; 
};

int main(){

struct node* root_ptr;
root_ptr = create();
print_binary_tree(root_ptr);
}

struct node* create(){
    static int count =0;
    static int num_left_node=0;
    static int num_right_node =0;
    int data;
    if(count==0){
        printf("Enter Data:"); 
        count++;
    }
    scanf("%d",&data);
    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
    if(data==-1){
        new_node->left=NULL;
        new_node->right=NULL;
        return new_node;
    }
    else{
        new_node->data=data;
        printf("Enter data for left node of %d:",data);
        new_node->left=create();
        num_left_node++;
        printf("Enter data for right node of %d:",data);
        new_node->right=create();
        num_right_node++;
        return new_node;
    }
    
    
}

