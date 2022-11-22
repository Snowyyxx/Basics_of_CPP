#include<stdio.h>
#include<stdlib.h>
struct node* create_tree();
struct node{
    int data;
    struct node* left;
    struct node* right;
};

int main() {

    struct node* root_ptr;
    root_ptr = create_tree();

}

struct node* create_tree(){
    int data;
    static int count =0;
    if(count==0){
        printf("Enter Data: ");
        scanf("%d",&data);
        count++;
    }
    else {
        scanf("%d",&data);
    };
    struct node* new_node;
    new_node= (struct node*)malloc(sizeof(struct node));
    if(data==-1){
        return NULL;
    } else{
        new_node->data=data;
        printf("Enter data for LEFT NODE for %d:",data);
        new_node->left=create_tree();
        printf("Enter Data for RIGHT NODE for %d:", data);
        new_node->right=create_tree();
        return new_node;
    }
}

int print_tree(struct node* root_ptr){
    struct node* new_ptr;
    new_ptr = root_ptr;
    while(new_ptr->left!=NULL){
        printf("%d \n",new_ptr->data);
        new_ptr=new_ptr->left;
    }
    new_ptr=root_ptr;
    

}