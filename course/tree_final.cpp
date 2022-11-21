#include<stdio.h>

struct node{
    int data;
    struct node* left_node;
    struct node* right_node;

};

int main(){

struct node* root_ptr;
root_ptr = create();

}

struct node* create(){
    struct node new_node;
    new_node = (struct node*)malloc(sizeof(struct node));
}