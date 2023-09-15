#include <stdio.h>

int isSorted(int a[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (a[i] > a[i + 1]) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int size = sizeof(a) / sizeof(a[0]);
    if (isSorted(a, size)) {
        printf("The array is sorted in ascending order.\n");
    } else {
        printf("The array is not sorted in ascending order.\n");
    }

    return 0;
}
