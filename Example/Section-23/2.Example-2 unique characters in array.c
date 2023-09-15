#include <stdio.h>
int main() 
{
    int arr[] = {2, 4, 6, 2, 8, 4, 1, 10, 6, 12};
    int n = sizeof(arr) / sizeof(arr[0]);

    int visited[n];
    for (int i = 0; i < n; i++) 
    {
        visited[i] = 0;
    }
    printf("Unique elements in the array: ");
    int uniqueCount = 0;

    for (int i = 0; i < n; i++) 
    {
        if (visited[i] == 0) 
        {
            printf("%d ", arr[i]);
            uniqueCount++;
            for (int j = i + 1; j < n; j++) 
            {
                if (arr[i] == arr[j]) 
                {
                    visited[j] = 1;
                }
            }
        }
    }
    printf("\nTotal unique elements: %d\n", uniqueCount);
    return 0;
}
