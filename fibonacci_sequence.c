#include <stdio.h>
int main()
{

    int f1 = 0;
    int f2 = 1;
    int n = 6;
   
    for (int i = 0; i < n; i++)
    {
         printf("%d ", f1);
        int f3 = f2 + f1;
        f1 = f2;
        f2 = f3;
       
    }

    return 0;
}