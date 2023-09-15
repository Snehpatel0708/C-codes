#include <stdio.h>

int sumOfAP(int a, int d, int n) 
{
    if (n == 1)
    {
        return a;
    } else {
        return a + sumOfAP(a + d, d, n - 1);
    }
}

int main() 
{
    int firstTerm, commonDifference, n;
    
    printf("Enter the first term of the arithmetic progression: ");
    scanf("%d", &firstTerm);
    
    printf("Enter the common difference: ");
    scanf("%d", &commonDifference);
    
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    
    int sum = sumOfAP(firstTerm, commonDifference, n);
    
    printf("Sum of the arithmetic progression: %d\n", sum);
    
    return 0;
}
