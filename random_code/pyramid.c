
#include<stdio.h>
int main()
{
    int a=5;
    for(int i=1;i<=a;i++)
    {
        for (int x=1 ;x<=a-i;x++){
        printf(" ");}
        for(int y =1;y<=i;y++){
        printf("%d ",i);}
    printf("\n");
    }
}