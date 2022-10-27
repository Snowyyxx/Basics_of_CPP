#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};

int add_element(int data,
                struct node pointer,
                struct node first_node_pointer,
                struct node next_pointer);

int main () {

    struct node* first_node;
    struct node* ptr;
    struct node* ptr_next;
    int a=1;
    add_element(a,ptr,first_node,ptr_next);

}
int add_element(int value,
                struct node* current_ptr,
                struct node* first_node_ptr,
                struct node* next_ptr){

    current_ptr= (struct node*)malloc(sizeof(struct node));
    next_ptr = (struct node*)malloc(sizeof(struct node));
    current_ptr->data=value;
    current_ptr->next=next_ptr;

    if (first_node_ptr==0){
        first_node_ptr = current_ptr;
    }
}
