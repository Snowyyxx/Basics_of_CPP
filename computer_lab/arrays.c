#include<stdio.h>
void print_array(int length,int *ptr);
int greatest_element(int length,int * ptr,int marks[]);
int main(){
    int marks[]={1,2,3,4,5,123,232,8,99999};
    int *ptr = &marks[0];
    int length =sizeof(marks)/4; 
    greatest_element(length,ptr,marks);

}

void print_array(int length,int *ptr){
    for(int i=0;i<length;i++){
        printf("%d",*ptr);
        ptr++;
    }
}

int greatest_element(int length,int * ptr,int marks[]){

    int g_elem;
    int elem;
    int count =0;
    for(int i =0;i<length;i++){
        elem = marks[i];
        if(count==0){
            g_elem=elem;
            count++;
        }
        if(elem>g_elem){
            g_elem=elem;
        }
    
    }   

    printf("greatest element: %d",g_elem);
}