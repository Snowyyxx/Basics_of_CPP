#include<stdio.h>

int recur(int num1);

int main() {
    int a=6;
    recur(a);
}

int recur(int num1) {
    int i=num1,z;
    
    if (i==1){
        return 0;
    }else{
        printf("%d",i* recur(i-1));
    }
    i--;
}