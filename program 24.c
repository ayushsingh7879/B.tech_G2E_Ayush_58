#include <stdio.h>

int main() {
    int arr[] = {12, 4, 65, 1, 89, 20, 5};
    int n = sizeof(arr) / sizeof(arr[0]); 
    int min, max;
    int i;

    min = arr[0];
    max = arr[0];

    for (i = 1; i < n; i++) {

        if (arr[i] > max) {
            max = arr[i];
        }

        if (arr[i] < min) {
            min = arr[i];
        }
    }

    printf("The array elements are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Minimum element is: %d\n", min);
    printf("Maximum element is: %d\n", max);

    return 0;
}
