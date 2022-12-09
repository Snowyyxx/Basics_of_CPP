#include<stdio.h>
#include<stdlib.h>
int array_nodes(int numberVertices,int adjaceny_matrix[][],struct node* array_nodes[]);
struct node* create_node();
struct node* create_graph(int numberVertices,int adjaceny_matrix[][],struct node* array_nodes[]);
struct node{
    int data;
    struct node* next_node[];
};

int main()
{
    int numberVertices=5;
    //scanf("%d",&numberVertices);
    struct node* graph;
    int adjaceny_matrix[numberVertices][numberVertices]={
            // 1,2,3,4,5
        /*1*/ {0,1,0,1,0},
        /*2*/ {1,0,1,1,0},
        /*3*/ {0,1,0,1,1},
        /*4*/ {1,1,1,0,1},
        /*5*/ {0,0,1,1,0}
    };
    struct node* array_nodes[numberVertices];
    array_nodes(numberVertices,adjaceny_matrix,array_nodes);
    struct node* graph = create_graph(numberVertices,adjaceny_matrix,array_nodes);
}

struct node* create_node(){
    struct node* new_node = (struct node*)malloc(sizeof(struct node));
}

int array_nodes(int numberVertices,int adjaceny_matrix[][],struct node* array_nodes[]){
    for(int row =0;row<numberVertices;row++){
        array_nodes[row] = (struct node*)malloc(sizeof(struct node));
    }
}

struct node* create_graph(int numberVertices,int adjaceny_matrix[][],struct node* array_nodes[]){
    for(int row =0;row<numberVertices;row++){
        int i = 0;
        for(int column=0;column<numberVertices;column++){
            if(adjaceny_matrix[row][column]==1){
                (array_nodes[row])->data=1;
                (array_nodes[row])->next_node[i]=array_nodes[column];
                i++;
            }
        }
    }
}
