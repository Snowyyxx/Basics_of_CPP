#include<stdio.h>
#include<stdlib.h>
struct node* create_list(struct node* current_node);
void print_list_forward(struct node* head_ptr);
struct node {
    struct node* left;
    struct node* right;
    int data;
};

int main()
{
    struct node* head_ptr;
    head_ptr = create_list(head_ptr);
    print_list_forward(head_ptr);
}

struct node* create_list(struct node* current_node){

    static int count = 0;
    int data;
    printf("Enter Data:");
    scanf("%d",&data);

    if(data==-1){

        if(count==0){
            current_node->left=NULL;
            count++;
        }
        current_node->right=NULL;
        return current_node;
        
        
    }
    else {

        struct node* next_node = (struct node*)malloc(sizeof(struct node));
        if(count==0){
            current_node->left=NULL;
            current_node->data=data;
            current_node->right=create_list(current_node);
            count++;
            return current_node;
        }
        else{
            next_node->data=data;
            next_node->left=current_node;
            next_node->right=create_list(next_node);
            return next_node;
        }

    }


}

void print_list_forward(struct node* head_ptr){
    struct node* dummy_node = head_ptr;
    while(dummy_node->right!=NULL){
        printf("%d",dummy_node->data);
        dummy_node = dummy_node->right;
    }
}