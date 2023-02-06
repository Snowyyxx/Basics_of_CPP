#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next_node;
    struct node* previous_node;
};
void print_double_ll_forward(struct node* current_node,struct node* head);
void print_nth_element(struct node* current_node,struct node* head,int n);
void print_double_ll_backward(struct node* current_node,struct node* head,struct node*ptr);
struct node* add_first_node(struct node* head, int value,struct node* current_node);
struct node* add_subsequent_node(struct node* current_node,int value,struct node*next_node);
struct node* add_10_elements(struct node* current_node,struct node* next_node);

int main(){
    int data =1;
    struct node* head =(struct node*)malloc(sizeof(struct node));
    int n=4;
    struct node* current_node=(struct node*)malloc(sizeof(struct node));
    struct node* next_node;
    head = add_first_node(head,data,current_node);  
    current_node=add_10_elements(current_node,next_node);
    //print_nth_element(current_node,head,n);
    struct node* ptr = current_node->previous_node;
    print_double_ll_backward(current_node,head,ptr);
}

struct node* add_first_node(struct node*head,int value,struct node* current_node){
    head->data=value;
    head->previous_node=NULL;
    head->next_node=current_node;
    return head;
}

struct node* add_subsequent_node(struct node* current_node,int value,struct node*next_node){
    current_node->data=value;
    next_node = (struct node*)malloc(sizeof(struct node));
    current_node->next_node=next_node;
    next_node->next_node=NULL;
    next_node->previous_node=current_node;
    return next_node;
}

struct node* add_10_elements(struct node* current_node,struct node* next_node){
    for(int i=2;i<11;i++){
        current_node=add_subsequent_node(current_node,i,next_node);
    }
    return current_node;
}

void print_double_ll_forward(struct node* current_node,struct node* head){
    struct node* ptr=head;
    while(ptr->next_node!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->next_node;
    }
}

void print_double_ll_backward(struct node* current_node,struct node* head,struct node*ptr){

    while(ptr->previous_node!=NULL){
        printf("%d \n",ptr->data);
        ptr=ptr->previous_node;
    }

}

void print_nth_element(struct node* current_node,struct node* head,int n){
    //considering head to be first element:
    struct node* ptr=head;
    for(int i =1;i<n;i++){
        ptr=ptr->next_node;
    }
    printf("%d \n",ptr->data);
}   