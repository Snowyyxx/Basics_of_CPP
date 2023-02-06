#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};

struct node* add_node (int user_data,struct node*pointer,struct node*first_node_pointer);

int main(){
    struct node *first_node;
    first_node =0 ;
    struct node*ptr;
    int a =4;
    add_node(a,ptr,first_node);
   // printf("%u",first_node);

}

struct node* add_node (int user_data,struct node*pointer,struct node*first_node_pointer){
    pointer = (struct node*)malloc(sizeof(struct node));
    pointer->data=user_data;
    pointer->next=0;
 
    printf("%d \n",pointer->data);
    printf("%d \n",pointer->next);
    
}