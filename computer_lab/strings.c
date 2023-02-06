#include<stdio.h>
#include<string.h>
void length_string(char name[]);
void print_pointers(char*ptr);
int main () {
    char name [] = "adityaaa";
    //char surname[]={};
    //gets(surname);
    length_string(name);
    printf("\nlength using function:%d",strlen(name));
    print_pointers(&name[0]);
}

void length_string(char name[]){
    int i=0;
    int count =1;
    while(name[i]!=0){
        i++;
        count++;
    }
    printf("length: %d",count);
}

void print_pointers(char*ptr){
    while(*ptr!=0){
        printf("\n%c",*ptr);
        ptr++;
    }

}