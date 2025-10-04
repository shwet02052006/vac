#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 121;
    int o =n;
    int rn = 0;
    while (n != 0)
    {
        int rem = (n % 10);
        rn = (rn * 10) + rem;
        n /= 10;
    }
    if (rn == o)
    {
        printf("palindrom");
    }
    else
        printf("not palindrom");

    return 0;
}
