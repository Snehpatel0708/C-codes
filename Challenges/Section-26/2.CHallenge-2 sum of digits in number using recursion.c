#include <stdio.h>
int sumOfDigits(int n);

int main() {
    int number;
    
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    if (number < 0) {
        printf("Please enter a positive integer.\n");
    } else {
        int sum = sumOfDigits(number);
        printf("Sum of digits in %d is %d\n", number, sum);
    }
    
    return 0;
}

int sumOfDigits(int n) {
    // Base case: if n is a single-digit number, return n
    if (n < 10) {
        return n;
    }
    
    // Recursive case: sum of the last digit and the sum of digits in the remaining part of n
    return n % 10 + sumOfDigits(n / 10);
}
