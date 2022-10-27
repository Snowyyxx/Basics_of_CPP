#include<stdio.h>

int main(){
    int x_vertex,y_vertex,side_len;
    printf("Enter the x-coordinate of the left bottom vertex: ");
    scanf("%d",&x_vertex);
    printf("Enter the y-coordinate of the left bottom vertex: ");
    scanf("%d",&y_vertex);
    printf("Enter the length of side: ");
    scanf("%d",&side_len);
    // side_len%2==0;
    //x_vertex and y_vertex are of bottom left vertex;
    int x_center = x_vertex + side_len/2;
    int y_center = y_vertex + side_len/2;
    printf("The centre of the room is at (%d,%d)",x_center,y_center);
}