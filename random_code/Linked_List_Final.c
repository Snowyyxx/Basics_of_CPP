#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* previous_node;
    struct node* next_node;
};

struct node * add_first_node(int value,int count,struct node*first_node,struct node* current_node,struct node* future_node);
struct node * add_subsequent_node(int value,int count,struct node*first_node,struct node* current_node,struct node* future_node);

int main(){
    struct node* first_node=NULL;
    int count =0;
    struct node* current_node=NULL;
    struct node* future_node=NULL;
    int a=1,b=2,c=3;
    first_node=add_first_node(a,count,first_node,current_node,future_node);    
    current_node=add_subsequent_node(b,count,first_node,current_node,future_node);
    current_node=add_subsequent_node(c,count,first_node,current_node,future_node);
    
    printf("%u \n",first_node->data);
    printf("%u \n",current_node->previous_node->data);
    printf("%u \n",current_node->previous_node->data);
  //  printf("%u \n ",current_node->previous_node->previous_node->data);
}

struct node * add_subsequent_node(int value,int count,struct node*first_node,struct node* current_node,struct node* future_node){


        future_node=(struct node*)malloc(sizeof(struct node));
        future_node->previous_node=current_node;
        future_node->data=value;
        current_node=future_node;
        return current_node;


    
}
struct node * add_first_node(int value,int count,struct node*first_node,struct node* current_node,struct node* future_node){

        current_node = (struct node*)malloc(sizeof(struct node));
        current_node->data=value;
        current_node->previous_node=NULL;
        return current_node;

}
