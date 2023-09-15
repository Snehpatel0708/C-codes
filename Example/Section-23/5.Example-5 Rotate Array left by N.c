#include <stdio.h>
int main() 
{
    int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &k);

   int temp[k];
    for (int i = 0; i < k; i++) 
    {
        temp[i] = arr[i];
    }
    
    for (int i = k; i < n; i++) 
    {
        arr[i - k] = arr[i];
    }
    
    for (int i = 0; i < k; i++) 
    {
        arr[n - k + i] = temp[i];
    }

    printf("Array after rotating left by %d positions:\n", k);
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
