#include <stdio.h>

int main() {
    int n, remainder, sum = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;    // Get the last digit
        sum = sum + remainder; // Add it to the total
        n = n / 10;            // Remove the last digit
    }

    printf("Sum of digits = %d\n", sum);

    return 0;
}
