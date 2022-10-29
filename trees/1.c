#include<stdio.h>
#include<stdlib.h>
struct node* add_first_node(struct node* root_node,int data,int *node_number,struct node* current_node);

/*
1) PreOrder Traversal: Here, the traversal is: root – left child – right child. It means that the root node is traversed first then its left child and finally the right child.
2) InOrder Traversal: Here, the traversal is: left child – root – right child.  It means that the left child is traversed first then its root node and finally the right child.
3) PostOrder Traversal: Here, the traversal is: left child – right child – root.  It means that the left child is traversed first then the right child and finally its root node.
*/

/*
PreOrder Traversal of the above tree: 1-2-4-5-3-6-7 -> This;
InOrder Traversal of the above tree: 4-2-5-1-6-3-7
PostOrder Traversal of the above tree: 4-5-2-6-7-3-1
*/


/*
                 1 //Root Node
                / \
               2    3
              / \  / \
             4  5  6  7 //Leaf Nodes 
*/
struct node{
    int data;
    struct node*left_node;
    struct node*right_node;
};

int main(){

    struct node* root_node =(struct node*)malloc(sizeof(struct node));
    struct node* current_node;
    struct node* previous_node;
    int data=2;
    int node_number = 1;
    current_node = add_first_node(root_node,data,&node_number,current_node);

}

struct node* add_first_node(struct node* root_node,int data,int *node_number,struct node* current_node){
    if(*node_number==1){
        root_node->data=data;
        root_node->left_node=(struct node*)malloc(sizeof(struct node));
        current_node = root_node;
        *node_number=2;
    }
    if(*node_number==5){
        root_node->data=data;
        root_node->right_node=(struct node*)malloc(sizeof(struct node));
        *node_number=3;
        current_node = root_node;
    }
    return current_node;
}
struct node* add_subsequent_nodes(struct node* root_node,int data,int *node_number,struct node* current_node){
    current_node->
}
