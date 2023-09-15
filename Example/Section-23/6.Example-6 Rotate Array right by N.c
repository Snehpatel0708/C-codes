#include <stdio.h>
int main() 
{
   int n, k;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int a[n];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &a[i]);
    }

    printf("Enter the number of positions to rotate left: ");
    scanf("%d", &k);
    int temp[k]; 

    for (int i = n - k, j = 0; i < n; i++, j++) 
    {
        temp[j] = a[i];
    }

    for (int i = n - 1; i >= k; i--) 
    {
        a[i] = a[i - k];
    }

    for (int i = 0; i < k; i++) 
    {
        a[i] = temp[i];
    }

    printf("\nRotated Array: ");
    for (int i = 0; i < n; i++) 
    {
        printf("%d ", a[i]);
    }
    return 0;
}
