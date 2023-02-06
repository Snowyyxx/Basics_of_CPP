#include<iostream>
using namespace std;
 
struct node{
    int data;
    struct node*next_ptr;
    struct node*prev_ptr;
};

struct node* add_data(int value,struct node* first_node_ptr,struct node*current_ptr);

int main (){
    struct node* first_node;
    struct node* current_ptr;
    int a=1;
    current_ptr=add_data(a, first_node,current_ptr);
    printf("%d",current_ptr->data);
}

struct node* add_data(int value,struct node* first_node_ptr,struct node*current_ptr){
    if(first_node_ptr=NULL){
        current_ptr=(struct node*)malloc(sizeof(struct node));
        current_ptr->data=value;
        current_ptr->next_ptr=(struct node*)malloc(sizeof(struct node));
        current_ptr->prev_ptr=NULL;
        first_node_ptr =current_ptr;
        return current_ptr;

    }
    if(first_node_ptr!=NULL){
        current_ptr->next_ptr->data=value;
        current_ptr->next_ptr->next_ptr=(struct node*)malloc(sizeof(struct node));
        current_ptr->next_ptr->prev_ptr=current_ptr;
        current_ptr = current_ptr->next_ptr;
        return current_ptr;
}
}