#include <stdio.h>
int findMaxDigit(int number) {
    int maxDigit = 0;

    while (number > 0) {
        int digit = number % 10;
        if (digit > maxDigit) {
            maxDigit = digit;
        }
        number /= 10;
    }

    return maxDigit;
}

int main() {
    int num;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    if (num >= 10 && num <= 99) {
        int max = findMaxDigit(num);
        printf("The maximum digit in %d is: %d\n", num, max);
    } else {
        printf("Please enter a valid two-digit number.\n");
    }
    return 0;
}
