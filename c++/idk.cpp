#include<iostream>
using namespace std;
int length;

int hash_function(int length,int index[],int keys[]);

void print_array(int array[],int length);

struct node* create_list(int length,int keys[]);

void print_list(struct node* head_node);

struct node{
    int data;
    struct node* next;
    struct node* prev;
};

int main()
{
    int keys[] = {22321,21676,34432};
    length = sizeof(keys)/4;
    int index[length];
    hash_function(length,index,keys);      
    struct node* head_node;
    head_node = create_list(length,keys);
    print_list(head_node);
}

int hash_function(int length,int index[],int keys[]){
       for(int i=0;i<length;i++){
        index[i]=keys[i]%10;
    }
}

void print_array(int array[],int length){
    for(int i=0;i<length;i++){
        cout<<array[i]<<"\n";
    }
}

struct node* create_list(int length,int keys[]){
    struct node* new_node=(struct node*)malloc(sizeof(struct node));
    static int i=0;
    while(i<length){
        if(i==length-1){
            new_node->next=NULL;
            new_node->data=keys[i];
            return new_node;
            
        } else {
            new_node->data=keys[i];
            i++;
            cout<<i<<"\n";
            new_node->next= create_list(length,keys);
            return new_node;
        }
    }

}

void print_list(struct node* head_node){
    struct node* dummy_node =head_node;
    while(dummy_node->next!=NULL){
        cout<<dummy_node->data<<"\n";
        dummy_node=dummy_node->next;
    }
}