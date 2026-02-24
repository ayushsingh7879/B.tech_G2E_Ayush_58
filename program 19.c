#include <stdio.h>

int main() {
    int i, temp, remainder, sum;

    printf("Armstrong numbers between 1 and 100 are:\n");

    for (i = 1; i <= 100; i++) {
        temp = i;
        sum = 0;

        while (temp != 0) {
            remainder = temp % 10;
            sum = sum + (remainder * remainder * remainder);
            temp = temp / 10;
        }

        if (sum == i) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
