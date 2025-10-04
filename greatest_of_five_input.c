#include <stdio.h>

int main() {
    int a, b, c, d, e;

   
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b);

    printf("Enter value for c: ");
    scanf("%d", &c);

    printf("Enter value for d: ");
    scanf("%d", &d);

    printf("Enter value for e: ");
    scanf("%d", &e);

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