/*tree and graph -> non linear data structures
1) leaf node ->no children
2) non leaf node-> have children
3) parent node-> immediate parent node
4) path -> sequence of consecutive edges from source to destination node;
5) only from top to bottom;
6) ancestor -> any predecessor node on path from root to that node;
7) decendents -> succssor node on the path from that node to leaf node;
8) root node -> first node and no parent node
9) tree has subtrees;
10) sibling -> children of same parent
11) degree -> maximum no of children of that node
12) depth of node ->length of path from root to that node
13) height of node -> longest length of path from that node to leaf node
14) level of node -> equal to depth of node  : nodes devided into levels
15) n nodes -> n-1 edges
16) binary tree -> 2 children 
17) maximum number of nodes possible at any level i = 2^i

18) Strict Binary Tree ->  each node have either 0 or 2 children
19) Complete Binary Tree -> all levels are completely filled (except maybe the last level)
and the last level is filled from left to right;
20) Perfect Binary Tree -> all internal nodes have 2 children and all levels are at same level;
21) Degenerate Binary Tree -> wierd tree all the nodes have only one child;
*/

#include<stdio.h>

struct node{
    int data;
    struct node* left_node;
    struct node* right_node;
};
struct tree{
    struct node head_node;
};

int main(){
    int a=2;
}