#include <stdio.h>

int main() {
    // Define the dimensions of the 2D array
    int rows = 3;
    int cols = 3;

   
    int array[rows][cols] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n"); // Move to the next row after printing all columns
    }

    return 0;
}
