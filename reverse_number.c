

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n = 1542;
    int rn = 0;
    while (n != 0)
    {
        int rem = (n % 10);
        rn = (rn * 10) + rem;
        n /= 10;
    }
    printf("%d", rn);

    return 0;
}
