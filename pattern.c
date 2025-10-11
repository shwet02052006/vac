
#include <stdio.h>
#include <stdlib.h>
int main()

{
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         printf("%d ", row +1);
    //     }
    //     printf("\n");
    // }
    // int n=1;
    //  for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         printf("%d ", n++);
    //     }
    //     printf("\n");
    // }
    // char c = 'z';
    // int n = 122;
    // for (int row = 0; row < 3; row++)
    // {
    //     for (int col = 0; col < 3; col++)
    //     {
    //         printf("%c ", n--);
    //     }
    //     printf("\n");
    // }

    for (int row = 0; row < 5; row++)
    {
        for (int col = 0; col <= row; col++)
        {
            if ((row+col)%2 == 0)//odd
                printf("*");
            else
                printf("_");
       
        }
        printf("\n");
    }
    return 0;
}
