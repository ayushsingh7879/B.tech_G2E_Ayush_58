#include <stdio.h>

int main() {
    int n, i;
    int sum = 0; // Always initialize sum to 0!

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum = sum + i; // Adding the current number to our total
    }

    printf("The sum of all numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}
