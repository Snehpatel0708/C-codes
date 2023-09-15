#include <stdio.h>

int main() {
    int arr[] = {12, 45, 78, 23, 56, 89, 34, 67, 90};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    if (n == 0) {
        printf("The array is empty, so there is no maximum value.\n");
        return 1; 
    }

    int max = arr[0]; 

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The maximum value in the array is: %d\n", max);

    return 0;
}
