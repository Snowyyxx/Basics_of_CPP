#include<stdio.h>

struct node{
    int data;
    struct node* left_node;
    struct node* right_node;
};
int add_subsequent_data(struct node ptr_tree[],int data,int*position,int* count);
int add_first_data(struct node ptr_tree[],int data,int* position,int *count);
int print_tree(struct node ptr_tree[],int*position,int*count);

int main(){
    // if node_index ->i then left_child-> 2i and right_child ->2i+1;
    int data=1,count=0;
    int position=0;
    struct node tree[]={};
    tree->left_node=NULL;
    tree->right_node=NULL;
    add_first_data(tree,data,&position,&count);
    printf("%d\n",tree[1].data);
    add_subsequent_data(tree,2,&position,&count);
    printf("%d\n",tree[2].data);
}


int add_first_data(struct node ptr_tree[],int data,int* position,int *count){
    *position=1;
    *count++;
    ptr_tree[*position].data = data;
    ptr_tree[*position].left_node=&ptr_tree[*position*2];
    ptr_tree[*position].right_node=&ptr_tree[*position*2+1];
}

int add_subsequent_data(struct node ptr_tree[],int data,int*position,int* count){

    if(ptr_tree[*position*2].left_node=NULL&&ptr_tree[*position*2].right_node=NULL){
        
    }




}/*

int print_tree(struct node ptr_tree[],int*position,int*count){
    for(int i=1;i<(*count/3)+1+1;i++){
        int number;
        printf("Right-Node:%d\n",ptr_tree[i].data);
        printf("Right-Node:%d\n",ptr_tree[2*i].data);
        printf("Left-Node:%d\n",ptr_tree[2*i+1].data);
    }

}
*/