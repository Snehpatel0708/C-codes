#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nReversed array: ");
    for (int i = length - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
