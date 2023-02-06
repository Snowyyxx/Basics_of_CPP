#include<iostream>
using namespace std;
struct node* create_list(int length);
void print_list(struct node* head_node);
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
int main()
{
    
    struct node* head_node;
    int length_linked_list=5;
    head_node = create_list(length_linked_list);
    print_list(head_node);

}
struct node* create_list(int length){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    static int i;
    while(i<length){
        if(i==length-1){
            new_node->next=NULL;
            new_node->data=i;
            return new_node;
            
        } else {
            i=i+1;
            new_node->data=i;
            new_node->next= create_list(length);
            return new_node;
        }
    }

}

void print_list(struct node* head_node){
    struct node* dummy_node =head_node;
    while(dummy_node->next!=NULL){
        cout<<dummy_node->data<<"value:";
        dummy_node=dummy_node->next;
    }
}