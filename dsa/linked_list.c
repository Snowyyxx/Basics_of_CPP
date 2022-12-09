#include<stdio.h>
#include<stdlib.h>
struct node* create();
void print_linked_list(struct node* head_ptr);
struct node {
    int data;
    struct node* next_node;
    struct node* prev_node;
};


int main() {

struct node* head_node;
head_node = create();
print_linked_list(head_node);
}

struct node* create(){

    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    struct node* current_node = (struct node*)malloc(sizeof(struct node));
    int data;
    printf("Enter data:");
    scanf("%d",&data);
    static int temp = 0;

    if(temp==0){
        if(data==-1){
            current_node->next_node=NULL;
            return new_node;
        }
        else{
            current_node->prev_node=NULL;
            current_node->data=data;
            temp++;
            current_node->next_node=create();

        }
    }
    else{
        if(data==-1){
            new_node->next_node=NULL;
            return new_node;
        }
        else{
            new_node->data=data;
            new_node->prev_node=current_node;
            new_node->next_node=create()


        }
    }


}

void print_linked_list(struct node* head_ptr){
    struct node* next_node = head_ptr;
    while(next_node->next_node!=NULL){
        printf("%d,",next_node->data);
        next_node=next_node->next_node;
    }
}