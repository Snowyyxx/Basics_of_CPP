#include<stdio.h>
void pront(int x);
int main()
{
    int arr[6]={1,2,3,5,6,6};
    for(int i=0;i<6;i++)
    pront(arr[i]); 
}
void pront(int x)
{
    printf("%d",x);
}
