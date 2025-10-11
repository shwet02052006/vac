#include <stdio.h>

int main() {
    int num, temp, sum = 0, digit;
    
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    
    temp = num;
    
    // Calculate sum of cubes of digits
    while (temp != 0) {
        digit = temp % 10;
        sum = sum + (digit * digit * digit);
        temp = temp / 10;
    }
    
    // Check if Armstrong number
    if (sum == num) {
        printf("%d is an Armstrong number\n", num);
    } else {
        printf("%d is not an Armstrong number\n", num);
    }
    
    return 0;
}
