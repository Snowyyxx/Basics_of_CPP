#include<stdio.h>
#include<stdlib.h>

struct node {int data;struct node* next;};
struct node* add_first_node(int value, struct node* head);
struct node* add_subsequent_nodes(int value,struct node* current_node,struct node* next_node);
int length_linked_list(int count,struct node* ptr,struct node* current_node,struct node* next_node);
void print_linked_list(int count,struct node* ptr);
struct node* add_elements(struct node*current_node,struct node* next_node);

int main(){
    struct node* head;
    struct node* current_node;
    struct node* next_node;
    int count=0;
    int a=1;
    head = add_first_node(a,head);
    head->next=current_node;
    current_node=head;
    current_node=add_elements(current_node,next_node);
    struct node* ptr=head;
    count= length_linked_list(count,ptr,current_node,next_node);
    print_linked_list(count,ptr);
}

struct node* add_first_node(int value, struct node* head){
    head =(struct node*)malloc(sizeof(struct node));
    head->data=value;
    return head;
}

struct node* add_subsequent_nodes(int value, struct node* current_node, struct node* next_node){
    next_node=(struct node*)malloc(sizeof(struct node));
    current_node->data=value;
    current_node->next=next_node;
    next_node->next=NULL;
    return next_node;
}

int length_linked_list(int count,struct node* ptr,struct node* current_node,struct node* next_node){
    while(ptr->next!=NULL){
        count++;
        ptr=ptr->next;
    }
    return count;
}

void print_linked_list(int count,struct node* ptr){
    while(ptr->next!=NULL){
        printf("%u \n",ptr->data);
        ptr=ptr->next;
    }
}

struct node* add_elements(struct node* current_node,struct node* next_node){
    for(int i=0;i<11;i++){
        current_node=add_subsequent_nodes(i,current_node,next_node);
    }
    return current_node;
}