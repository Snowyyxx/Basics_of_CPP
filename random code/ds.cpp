#include<iostream>
using namespace std;

struct node {

    int data;
    struct node*next;
};

int main () {

    struct node *first_node;
    struct node *new_ptr;
    new_ptr= (struct node*)malloc(sizeof(struct node));
    new_ptr->data=4;
    new_ptr->next = 0;
    first_node = new_ptr;

}