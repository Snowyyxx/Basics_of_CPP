#include<stdio.h>
#include<string.h>

int main ()  {

    char first_name[] = "aditya";
    char last_name[] = "jain";

    char *ptr_fn;
    ptr_fn = &first_name[0];
    for(int i = 1;i<7;i++){
        printf("letter:%c \n",*ptr_fn);
        ptr_fn++;
    }
    printf("length of string: %d \n",strlen(first_name));
    
}