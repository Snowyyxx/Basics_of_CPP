#include<stdio.h>
#include<stdlib.h>
#define COUNT 10

struct node {

    int data;
    struct node* left;
    struct node* right;

};
void print2DUtil(struct node* root, int space);
void print2D(struct node* root);
struct node* create_tree(int array[],int length);

int main() {
    struct node* root_ptr;
    int array[]={1,2,3,4,5};
    int length = sizeof(array)/4;
    root_ptr = create_tree(array,length);
    print2D(root_ptr);
}

struct node* create_tree(int array[],int length){
    static int i=0;
    int data= array[i];
    //printf("Enter data:");
    //scanf("%d",&data);
    struct node* new_node;
    new_node =(struct node*)malloc(sizeof(struct node));
    new_node->left=NULL;
    new_node->right=NULL;
    while(i<length){
        if(data==-1){
            new_node=NULL;
            return new_node;
        }
        else{
            new_node->data=data;
            //printf("Enter data for left node of (%d):",data);
            i++;
            new_node->left = create_tree(array,length);
            
            //printf("Enter data for right nod of(%d)",data);
            i++;
            new_node->right=create_tree(array,length);
        }
}

}

void print2DUtil(struct node* root, int space)
{
    // Base case
    if (root == NULL)
        return;
 
    // Increase distance between levels
    space += COUNT;
 
    // Process right child first
    print2DUtil(root->right, space);
 
    // Print current node after space
    // count
    printf("\n");
    for (int i = COUNT; i < space; i++)
        printf(" ");
    printf("%d\n", root->data);
 
    // Process left child
    print2DUtil(root->left, space);
}
 
// Wrapper over print2DUtil()
void print2D(struct node* root)
{
    // Pass initial space count as 0
    print2DUtil(root, 0);
}