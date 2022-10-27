#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b;
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the second value:");
    scanf("%d",&b);
    int num;
    printf("Enter the choice from the menue:");
    printf("1.Addition \n2.Subtraction\n3.Multiplication\n4.Division");
    scanf("%d",&num);
    switch(num)
    {
    case 1	:
        printf("Addition of the two numbers is:%d",a+b);
        break;
    case 2	:
        printf("Subtraction of the two numbers is: %d",a-b);
        break;
    case 3	:
        printf("Multiplication of the two numbers is: %d",a*b);
        break;
    case 4	:
        printf("Division of the two numbers is%d: ",a/b);
        break;
    default	:
        printf("Invalid Choice");
        break;
    }
}