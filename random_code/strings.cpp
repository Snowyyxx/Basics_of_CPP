#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int print_string_cbv(char name[]);
int print_string_cbr(char * ptr);
int main()
{
    char name[] ="aditya";
    //printf("%s",name);
    //print_string_cbv(name);
    print_string_cbr(&name[0]);
}

int print_string_cbv(char name[]){
    printf("%s",name);
}

int print_string_cbr(char * name){
    char * ptr = name;
    while((*ptr)!=0){
        printf("%s",*ptr);
        ptr = ptr+1;
    }
}