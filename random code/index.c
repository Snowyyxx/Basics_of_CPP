#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node* next;
};

struct node* add_first_node(int data,struct node* head,struct node* current_node);
struct node* add_subsequent_nodes(int data,struct node* current_node);

int main(){
	struct node* head=(struct node*)malloc(sizeof(struct node));
	struct node* current_node;
	int a=1;
	head = add_first_node(a,head,current_node);
	current_node=head;

	struct node* ptr=head;
	while(ptr!=NULL){
		printf("%u \n",ptr->data);
		ptr = ptr->next;
	}
}

struct node* add_first_node(int data,struct node* head,struct node* current_node){
	head->data=data;
	head->next=current_node;
	return head;
}

struct node* add_subsequent_nodes(int data,struct node* current_node){
	current_node->data=data;
	struct node* next_node =(struct node*)malloc(sizeof(struct node));
	current_node->next=next_node;
	next_node->next=NULL;
	return next_node;
}