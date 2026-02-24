#include <stdio.h>

int main() {
    int n, i;
    int evenSum = 0;
    int oddSum = 0;

    printf("Enter a number (n): ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {

        if (i % 2 == 0) {
            evenSum = evenSum + i;
        } 

        else {
            oddSum = oddSum + i;
        }
    }

    printf("\nResults for numbers from 1 to %d:\n", n);
    printf("Sum of all Even numbers: %d\n", evenSum);
    printf("Sum of all Odd numbers: %d\n", oddSum);

    return 0;
}
