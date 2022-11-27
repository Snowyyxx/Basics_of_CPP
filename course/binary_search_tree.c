#include<stdio.h>

struct node{
    int data;
    struct node* left_node;
    struct node* right_node;
};

int main() {


int num [] = {11,6,8,19,4,10,5,17,43,49,31};
// left subtree is less than the parent node and right subtree is more than the parent node;
struct node* root_ptr;
int length = sizeof(num)/4;
root_ptr = create(num,length);
}


struct node* create(int array[],int length){
    struct node* next_node;
    next_node = (struct node*)malloc(sizeof(struct node));
    static int count =0;
    static int i;
    for(i=0;i<length;i++){
        if(count==0){
            next_node->data=array[i];
            create(array,length);
        } else{

            while(next_node->left_node!=NULL){
                next_node = next_node->left_node;
                if(array[i]>)
            }

        }
    }

}