#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 2, 4, 5, 6, 1, 7, 8, 9, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int count;
    printf("Non-unique elements in the array are: ");

    for (int i = 0; i < n; i++) {
        count = 0;
        for (int j = 0; j < n; j++) 
        {
            if (i != j && arr[i] == arr[j]) 
            {
                count++;
                break;  
            }
        }
        if (count > 0) 
        {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
    return 0;
}
