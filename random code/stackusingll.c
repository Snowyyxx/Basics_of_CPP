#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next_node;
    struct node* previous_node;
};
struct node* remove_node(struct node*current_node,struct node* next_node);
struct node* add_first_node(struct node* head,int value,struct node* current_node);
struct node* add_subsequent_nodes(struct node* current_node,struct node* next_node,int value);
struct node* add_elements(struct node* current_node,struct node* next_node,struct node* head);
int main(){

    struct node* head = (struct node*)malloc(sizeof(struct node));
    struct node* current_node=(struct node*)malloc(sizeof(struct node));
    struct node* next_node;
    int data=1;
    head=add_first_node(head,data,current_node);
    current_node =add_elements(current_node,next_node,head);
    printf("Before Removing:%d \n",current_node->previous_node->data);
    current_node=remove_node(current_node,next_node);
    printf("After Removing:%d \n",current_node->previous_node->data);
}

struct node* add_first_node(struct node* head,int value,struct node* current_node){
    head->data=value;
    head->next_node=current_node;
    return head;
}

struct node* add_subsequent_nodes(struct node* current_node,struct node* next_node,int value){
    current_node->data=value;
    next_node=(struct node*)malloc(sizeof(struct node));
    current_node->next_node=next_node;
    next_node->previous_node=current_node;
    next_node->next_node=NULL;
    return next_node;
}
struct node* add_elements(struct node* current_node,struct node* next_node,struct node* head){
   
    for(int i =2;i<11;i++){
        current_node=add_subsequent_nodes(current_node,next_node,i);
}
    return current_node;
}

struct node* remove_node(struct node*current_node,struct node* next_node){
    next_node=current_node->previous_node;
    next_node->data=NULL;
    next_node->next_node=NULL;
    return next_node;
}