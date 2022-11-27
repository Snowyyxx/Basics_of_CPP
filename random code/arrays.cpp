#include<stdio.h>


int main(){

    int a[2][3]={
        {1,2,3},
        {4,5,6},
    };
int length_a = sizeof(a)/4;
int length_a_elem = sizeof(a[0])/4;
print_2d(a,length_a,length_a_elem);
}

void print_2d(int array[],int length_array,int length_elem){

    for(int i=0;i<length_array;i++){
        for(int j=0;j<length_elem;j++){
            printf("%d",array[i][j]);
        }
    }

}