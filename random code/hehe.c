#include<stdio.h>

struct student {
    int roll;
    int name;
    float cgpa;


};

int main () {
    struct student ENC [5];
    int *ptr;
    ptr = &ENC[0];
    printf("roll: %d \n",*ptr);
}