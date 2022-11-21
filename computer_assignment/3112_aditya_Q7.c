#include <stdio.h>

int main()
{
    printf("Name: Aditya Jain, Application Number:3112 \n");
    int n, t, sumd = 0, sump = 0, r, c;
    printf("Enter a number:");
    scanf("%d", &n);
    t = n;
    while (n > 0 || sumd > 9)
    {
        if (n == 0)
        {
            n = sumd;
            sumd = 0;
        }
        r = n % 10;
        sumd = sumd + r;
        n = n / 10;
    }
    n = t;
    c = 2;
    while (n > 1)
    {
        while (n % c == 0)
        {           
            sump = sump + c;
            n = n / c;
        }
        c = c + 1;
        if (c > t / 2)
            break;
    }

    n = sump;
    sump = 0;
    while (n > 0 || sump > 9)
    {
        if (n == 0)
        {
            n = sump;
            sump = 0;
        }
        r = n % 10;
        sump = sump + r;
        n = n / 10;
    }
    if (sumd == sump)
        printf("%d is a Smith number", t);
    else
        printf("%d is NOT a Smith number", t);

    return 0;
}