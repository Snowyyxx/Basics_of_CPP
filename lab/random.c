#include<stdio.h>
#include<stdlib.h>
int string_length(char * name);
int main()
{
    char name[100];
    printf("enter string:");
    scanf("%s",name);
    string_length(name);
}

int string_length(char * name){
    
    int count=0;
    char *ptr;
    ptr = name;
    while(*ptr!='\0'){
        printf("%s",*(ptr+count));
        count++;
    }
    printf("length of string:%d",count);
}
