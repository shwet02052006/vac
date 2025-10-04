// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int a = 10;
//     int b = 50;
//     int c = 30;
//     if (a > b && a > c)
    
//         printf("a is greatest \n");
    
//     else if (b > a && b > c)
//         printf("b is gretest \n");
//     else
//         printf("c is greatest \n");

//     return 0;
// }

// ALTERNATE LOGIC WIHTOUT LOGICAL OPERATOR 
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 50;
    int c = 60;

    if (a > b)
    {
        if (a > c)
            printf("a is greatest \n");
        else
            printf("c is greatest \n");
    }
    else 
    {
        if (b > c)
            printf("b is greatest \n");
        else
            printf("c is greatest \n");
    }

    return 0;
}

