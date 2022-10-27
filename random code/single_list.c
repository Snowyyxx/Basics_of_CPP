#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

struct node* add_first_node(int value,struct node* head);
struct node* add_subsequent_nodes(int value,struct node* current_node,struct node* next_node);

int main(){
    struct node* head=(struct node*)malloc(sizeof(struct node));
    struct node* current_node=NULL;
    struct node* next_node;
    int a=1;

    current_node = add_first_node(a,head);
    printf("%d",current_node->data);

    for (int i=0; i<10;i++){
        current_node = add_subsequent_nodes(a+i,current_node,next_node);
        printf("\n%d",current_node->data);
    }
    
}

struct node* add_first_node(int value, struct node* head){
    head->data=value;    
    return head;
}

struct node* add_subsequent_nodes(int value, struct node* current_node, struct node* next_node){
    next_node=(struct node*)malloc(sizeof(struct node));
    next_node->data=value;   
    current_node->next=next_node;
    return next_node;
}