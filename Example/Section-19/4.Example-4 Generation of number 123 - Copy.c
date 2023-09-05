#include <stdio.h>

void number(int n)
{
    int i;
    int num = 0;
    if(n <=9)
    {
        for(i = 0; i<n;i++)
        {
            num = num*10 + (i+1);
        }
    }
    else
    {
        num = printNines(n);
    }
    printf("%d",num);
}
void printNines(int n) {

    for(int i = 0; i<n;i++)
        {
            printf("9");
        }
}
int main() {
    int n;
    printf("Enter times u want to print 9:");
    scanf("%d",&n);
    number(n);
    return 0;
}