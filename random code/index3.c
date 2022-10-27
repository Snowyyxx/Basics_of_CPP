#include<stdio.h>

void print_arr();

int main () {
    int marks [] = {95,96,97,98,99};

    int *ptr = &marks[0];
    print_arr(ptr);
    
}

void print_arr(int *pointer) {
    for(int i = 1;i<5;i++){
        printf("value:%d \n",*pointer);
        pointer++;
    }
}