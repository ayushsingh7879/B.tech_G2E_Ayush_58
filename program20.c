#include <stdio.h>
#include <math.h>

int main() {
    long long n;
    int decimal = 0, i = 0, remainder;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    while (n != 0) {
        remainder = n % 10;
        n /= 10;
        decimal += remainder * pow(2, i);
        ++i;
    }

    printf("Decimal Number = %d\n", decimal);
    return 0;
}
