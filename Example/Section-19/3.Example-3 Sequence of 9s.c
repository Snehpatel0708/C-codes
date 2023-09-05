#include <stdio.h>

void printNines(int n) {
    if (n <= 0) {
        printf("\n");
        return;
    }
    printf("9 ");
    printNines(n - 1);
}

int main() {
    int n;
    printf("Enter times u want to print 9:");
    scanf("%d",&n);
    printNines(n);
    return 0;
}
