#include<stdio.h>
#include<strings.h>
int main() {
    char str2 [] = "HAPPY TO SEE " ;
    char str1 [] = "Best Batch in Thapar";
    char str3[] = "It\'s your class";
    char str4[] = "";
    printf("str1: %d\n",strlen(str1));
    printf("str2: %d\n",strlen(str2));
    printf("str3: %d\n",strlen(str3));

    printf("str2 after upper:%s",strupr(str1));
}