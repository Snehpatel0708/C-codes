#include <stdio.h>

int main() {
    int x = 42; 
    int *ptr = &x; 

    printf("Value of pointer variable: %d\n", *ptr); 
    printf("Address of pointer variable: %p\n", (void *)ptr); 

    return 0;
}
