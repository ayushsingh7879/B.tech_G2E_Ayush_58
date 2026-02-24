#include <stdio.h>

int main() {
    int n, i;
    int t1 = 0, t2 = 1; // The first two terms
    int nextTerm;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i = 1; i <= n; i++) {
        printf("%d, ", t1);
        
        nextTerm = t1 + t2;
        t1 = t2;       // Move t2 into t1
        t2 = nextTerm; // Move nextTerm into t2
    }

    printf("\n");
    return 0;
}
