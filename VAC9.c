#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a = 10;
    int b = 50;
    int c = 30;
    int d = 100;
    if (a > b && a > c && a > d)

        printf("a is greatest \n");

    else if (b > a && b > c && b > d)
        printf("b is gretest \n");
    else if (c > a && c > b && c > d)
        printf("c is greatest \n");
    else
        printf("d is greatest \n");
    return 0;
}
// ALTERNATE LOGIC WIHTOUT LOGICAL OPERATOR 
// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//     int a = 10;
//     int b = 50;
//     int c = 30;
//     int d = 100;

//     if (a > b) {
//         if (a > c) {
//             if (a > d)
//                 printf("a is greatest\n");
//             else
//                 printf("d is greatest\n");
//         } else {
//             if (c > d)
//                 printf("c is greatest\n");
//             else
//                 printf("d is greatest\n");
//         }
//     } else {
//         if (b > c) {
//             if (b > d)
//                 printf("b is greatest\n");
//             else
//                 printf("d is greatest\n");
//         } else {
//             if (c > d)
//                 printf("c is greatest\n");
//             else
//                 printf("d is greatest\n");
//         }
//     }

//     return 0;
// }
