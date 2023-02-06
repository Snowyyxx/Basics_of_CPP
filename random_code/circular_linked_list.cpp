#include<iostream>
using namespace std;
void print_linked_list(struct node* current_node);
struct node* circular_linked_list(struct node* current_node,struct node* head_ptr);
struct node{
    int data;
    struct node* next;
    struct node* prev;
};

int main()
{
    struct node* head_ptr;
    head_ptr = circular_linked_list(head_ptr,head_ptr);
    print_linked_list(head_ptr);
}

struct node* circular_linked_list(struct node* current_node,struct node* head_ptr){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
    int data;
    cout<<"enter data:";
    cin>>data;
    if(data==-1){
        head_ptr->prev=new_node;
        new_node->prev=current_node;
        new_node->data=-1;
        new_node->next=head_ptr;
        return new_node;
    } else{
        new_node->data=data;
        new_node->prev=current_node;
        new_node->next=circular_linked_list(new_node,head_ptr);
        return new_node;
    }

}

void print_linked_list(struct node* current_node){
    struct node* dummy_node;
    dummy_node = current_node;
    int number=0;
    while(number<20){
        cout<<dummy_node->data;
        cout<<"\n";
        dummy_node=dummy_node->next;
        number++;
    }
}