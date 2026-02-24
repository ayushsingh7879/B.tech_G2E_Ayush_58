#include <stdio.h>

int main() {
    int n, remainder;
    int reverse = 0;

    printf("Enter an integer to reverse: ");
    scanf("%d", &n);

    while (n != 0) {
        remainder = n % 10;          // 1. Extract the last digit
        reverse = reverse * 10 + remainder; // 2. Shift and Add
        n = n / 10;                  // 3. Remove the last digit
    }

    printf("Reversed Number = %d\n", reverse);

    return 0;
}
