#include <stdio.h>

int main() {
    int n, i;
    unsigned long long fact = 1; // Start with 1, not 0!

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        // Loop from 1 up to n
        for (i = 1; i <= n; i++) {
            fact = fact * i; // Multiply the running total by the next number
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }

    return 0;
}
