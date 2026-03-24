#include <stdio.h>

int main() {
    int n, i, j, k;
    int a[10][10], b[10][10], sum[10][10], mult[10][10];

    printf("Enter the order of the matrices (n): ");
    scanf("%d", &n);

    printf("Enter elements of the first matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of the second matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &b[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            sum[i][j] = a[i][j] + b[i][j];

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            mult[i][j] = 0; 
            for (k = 0; k < n; k++) {
                mult[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("\nSum of the matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("\nProduct of the matrices:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", mult[i][j]);
        printf("\n");
    }

    return 0;
}
