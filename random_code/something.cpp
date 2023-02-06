#include<iostream>
using namespace std;
struct node* create_bst(struct node* current_node,struct node* head_node);
struct node{
    int data;
    struct node* left_node;
    struct node* right_node;
};

int main() {

    //bst;
    struct node * head_node;
    head_node = create_bst(head_node,head_node);

}

struct node* create_bst(struct node* current_node,struct node* head_node){
    current_node=(struct node*)malloc(sizeof(struct node));
    int data;
    cout<<"enter data:";
    cin>>data;
    static int count =0;
    if(data==-1){
        return current_node;
    }
    else{
                if(count==0){   
                    head_node->data=data;
                    count++;
                    cout<<"enter data(after head node):";
                    cin>>data;
                    if(data>head_node->data){
                        head_node->right_node=create_bst(head_node->right_node,head_node);
                        head_node->left_node=create_bst(head_node->left_node,head_node);
                    } else if (data<head_node->data){
                        head_node->left_node=create_bst(head_node->left_node,head_node);
                        head_node->right_node=create_bst(head_node->right_node,head_node);
                    }
                
                            }
        
                else if (count!=0)
                        {
                            current_node->data=data;
                            cout<<"enter data(after node):";
                            cin>>data;
                            if(data>current_node->data){
                                current_node->right_node=create_bst(current_node->right_node,current_node);
                                current_node->left_node=create_bst(current_node->left_node,current_node);
                            } else if (data<current_node->data){
                                current_node->left_node=create_bst(current_node->left_node,current_node);
                                current_node->right_node=create_bst(current_node->right_node,current_node);
                            }

                        }
                        
        }
        return current_node;
}