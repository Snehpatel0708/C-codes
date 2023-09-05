#include <stdio.h>

int isEven(int num) {
    if (num % 2 == 0) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (isEven(number)) {
        printf("%d is even.\n", number);
    } else {
        printf("%d is odd.\n", number);
    }

    return 0;
}
