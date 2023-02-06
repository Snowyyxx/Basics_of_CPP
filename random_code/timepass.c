#include<stdio.h>
#include<string.h>

//void print_string(char name[]);

int main(){
    /*char name[] = "aditya";
    puts(name);*/

    char name1[] = "aditya";
    char name2[] = "jain";
    
    print_string(name1);

    for(int i=0;i<3;i++){
        
        printf("%c \n",name1[i]);
    }

    char jointname = strcat(name1, name2);
    puts(jointname);

}
/*
void print_string(char name[]){
    puts(name);

} */