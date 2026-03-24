#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int array1[size], array2[size], sum_array[size];

    printf("\\nEnter elements for the first array:\\n");
    for (i = 0; i < size; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &array1[i]);
    }

    printf("\\nEnter elements for the second array:\\n");
    for (i = 0; i < size; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < size; i++) {
        sum_array[i] = array1[i] + array2[i];
    }

    printf("\\nSum of corresponding elements:\\n");
    for (i = 0; i < size; i++) {
        printf("Sum[%d] = %d\\n", i, sum_array[i]);
    }

    return 0;
}
