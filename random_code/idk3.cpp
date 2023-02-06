// representing binary tree -> array;
/*
children nodes -> 2i+1 and 2i+2;
parent node -> (i-1/2)
filling of nodes starts from 0th index;
*/

#include<iostream>
using namespace std;
void print_array(int array[],int length);
struct node* create_tree();
int array_tree(int array[]);
struct node{
    int data;
    struct node* left_node;
    struct node* right_node;
};

int main()
{
    int array[]={};
    struct node* head_node = (struct node*)malloc(sizeof(struct node));
    //head_node=create_tree();
    array_tree(array);
    int length = sizeof(array)/4;
    print_array(array,length);
}

struct node* create_tree(){
    int data;
    static int count =0;
    struct node* new_node =(struct node*)malloc(sizeof(struct node));
    if(count==0){
        cout<<"enter data";
    }
    cin>>data;
    if(data==-1){
        new_node->data=data;
        new_node->left_node=NULL;
        new_node->right_node=NULL;
        return new_node;
    }else{
        new_node->data=data;
        cout<<"enter data for left node of:"<<data;
        new_node->left_node=create_tree();
        cout<<"enter data for right node of: "<<data;
        new_node->right_node=create_tree();
        return new_node;
    }
}

int array_tree(int array[]){
    int data;
    static int i=0;
    static int count=0;
    if(count==0){
        cout<<"enter data: ";
        count++;
    }
    cin>>data;
    if(data==-1){
        array[i]=data;
        cout<<"ok";
    }else{
        array[i] = data;
        i=2*i+1;
        cout<<"enter data for left node of"<<data;
        array_tree(array);
        cout<<"enter data for right node of"<<data;
        i=2*i+2;
        array_tree(array);
    }

}

void print_array(int array[],int length){
    for(int i=0;i<length;i++){
        cout<<" value: "<<array[i];
    }
}