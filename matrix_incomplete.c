
#include <stdio.h>
#include <stdlib.h>
int main()

{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%d ", col +1);
        }
        printf("\n");
    }
    return 0;
}
