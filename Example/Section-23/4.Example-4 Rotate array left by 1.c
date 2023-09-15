#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter the elements of the array: ");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }
    int temp = arr[0];
    for (int i = 0; i < n - 1; i++) 
    {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;

    printf("Array after rotating left by one position:\n");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
