#include<stdio.h>
#include<stdlib.h>
 
struct node{
    int data;
    struct node*next_ptr;
    struct node*prev_ptr;
};

struct node* add_data(int value,struct node* first_node_ptr,struct node* current_node_ptr);

int main (){
    struct node* first_node=NULL;
    struct node* current_node_ptr;
    int a=1,b=2;
    current_node_ptr = add_node(a, first_node,current_node_ptr);
    //current_node_ptr = add_node(b, first_node,current_node_ptr);
    printf("%d",current_node_ptr->data);
}

struct node* add_node(  int value,struct node* first_node_ptr,struct node* current_node_ptr){
    if(first_node_ptr==NULL){
        current_node_ptr=(struct node*)malloc(sizeof(struct node));
        current_node_ptr->data=value;
        current_node_ptr->next_ptr=(struct node*)malloc(sizeof(struct node));
        current_node_ptr->prev_ptr=first_node_ptr;
        first_node_ptr =current_node_ptr;
        printf("%d",current_node_ptr->data);
        return current_node_ptr;

    }else{
        current_node_ptr->next_ptr->data=value;
        current_node_ptr->next_ptr->next_ptr=(struct node*)malloc(sizeof(struct node));
        current_node_ptr->next_ptr->prev_ptr=current_node_ptr;
        current_node_ptr = current_node_ptr->next_ptr;
        return current_node_ptr;
}
}