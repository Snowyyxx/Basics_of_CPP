#include<stdio.h>

void search_elem(int a[],int length,int x);

int main(){
    int a[]={1,2,3,4,5,5,6,7,7,7};
    int length = sizeof(a)/4;
    int x=7;
    search_elem(a,length,x);
}

void search_elem(int a[],int length,int x){

    for(int i=0;i<length;i++){
        if(a[i]==x){
            printf("%d\n",i);
        }
        else{
            printf("%d\n",-1);
        }
    }

}