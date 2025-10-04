#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int b = 50;
    int c = 30;
    int d = 100;
    int e = 1000;
    if (a > b && a > c && a > d && a > e)
        printf("a is greatest \n");
    else if (b > a && b > c && b > d && b > e)
        printf("b is gretest \n");
    else if (c > a && c > b && c > d && c > e)
        printf("c is greatest \n");
    else if (d > a && d > b && d > e && d > c)
        printf("d is greatest \n");
    else
        printf("e is greatest \n");
    return 0;
}