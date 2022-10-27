#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

struct node* add_node(int value,struct node*current_ptr,struct node*first_node_ptr);

int main() {

struct node*first_node=NULL;
struct node*current_ptr;
struct node*dummy_ptr;
int a=4;
int b=1;
current_ptr = add_node(a,current_ptr,first_node);
//current_ptr = dummy_ptr;
printf("value stored:%d \n",current_ptr->data);
}

struct node* add_node(int value,struct node*current_ptr,struct node*first_node_ptr){
    printf("here\n");
    if (current_ptr->next = NULL){
        //struct node* first_node_ptr=new node();
        try{
            first_node_ptr=(struct node*)malloc(sizeof(struct node));
            }
        throw()
        {
            printf("error");
        }
        current_ptr=first_node_ptr;
        first_node_ptr->data=value;
        return current_ptr;
    } else{
        //struct node* current_ptr = new node();
        current_ptr->next=(struct node*)malloc(sizeof(struct node));
        current_ptr->next->data=value;
        current_ptr=current_ptr->next;
        return current_ptr;
    }

}