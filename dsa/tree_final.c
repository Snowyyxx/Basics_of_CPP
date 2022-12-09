#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* left;
    struct node* right;
};

struct node* create();

int main(){
    struct node* root_ptr;
    root_ptr = create();
}

struct node* create(){

    struct node* new_node;
    new_node = (struct node*)malloc(sizeof(struct node));

    int data;
    printf("Enter Value: ");
    scanf("%d",&(data)); // inputting value to be inserted

    if(data==-1){
        return NULL;
    }

    if (data!=-1){

        new_node->data=data;
        printf("For the left node of value %d:",data);
        new_node->left=create();
        printf("For the right node of value %d", data);
        new_node->right=create();
        return new_node;

    }
}
