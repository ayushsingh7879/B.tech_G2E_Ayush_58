#include <stdio.h>

int linearSearch(int arr[], int size, int target) {

    for (int i = 0; i < size; i++) {

        if (arr[i] == target) {
            return i; 
        }
    }

    return -1;
}

int main() {
    int array[] = {12, 34, 5, 2, 78, 56, 21};
    int target = 5;
    int n = sizeof(array) / sizeof(array[0]); 

    int result_index = linearSearch(array, n, target);

    if (result_index != -1) {
        printf("Element %d found at index %d (position %d).\n", target, result_index, result_index + 1);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    target = 100;
    result_index = linearSearch(array, n, target);
    if (result_index != -1) {
         printf("Element %d found at index %d.\n", target, result_index);
    } else {
        printf("Element %d not found in the array.\n", target);
    }

    return 0;
}
