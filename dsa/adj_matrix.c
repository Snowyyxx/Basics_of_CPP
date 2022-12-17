#include<stdio.h>
#include<stdlib.h>

void fill_matrix(int number_nodes,int adjMatrix[number_nodes][number_nodes],int number_edges);
void print_matrix(int number_nodes,int adjMatrix[number_nodes][number_nodes]);
void empty_matrix(int number_nodes,int adjMatrix[number_nodes][number_nodes]);

int main()
{
    int number_nodes;// number of nodes;
    int number_edges; // number of relations;
    printf("Number of Nodes: ");
    scanf("%d",&number_nodes);
    printf("Number of edges/relations: ");
    scanf("%d",&number_edges);
    int adjMatrix[number_nodes][number_nodes];
    empty_matrix(number_nodes,adjMatrix);
    fill_matrix(number_nodes,adjMatrix,number_edges);
    print_matrix(number_nodes,adjMatrix);
}   

void empty_matrix(int number_nodes,int adjMatrix[number_nodes][number_nodes]){
     for(int j=0;j<number_nodes;j++){
        for(int k=0;k<number_nodes;k++){
                adjMatrix[j][k]=0;
        }
    }
}

void fill_matrix(int number_nodes,int adjMatrix[number_nodes][number_nodes],int number_edges){

    int x=0,y=0;
    for(int i =0;i<number_edges;i++){
        printf("Enter relation: (X,Y)\n");
        printf("X:");
        scanf("%d",&x);
        printf("Y:");
        scanf("%d",&y);
        if(x==0||y==0||x>number_nodes||y>number_nodes){
            printf("Not Allowed");
            break;
        }else{
            adjMatrix[(x-1)][(y-1)]=1;
        }
    }
    printf("\n");
}

void print_matrix(int number_nodes,int adjMatrix[number_nodes][number_nodes]){
    
    for(int i=0;i<number_nodes;i++){
        for(int j=0;j<number_nodes;j++){
            printf("%d",adjMatrix[i][j]);
        }
        printf("\n");
    }
}



