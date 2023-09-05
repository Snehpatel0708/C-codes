#include <stdio.h>

int main()
{
	float a,b,temp=0;
	printf("Enter A: ");
	scanf("%f",&a);
	printf("Enter B: ");
	scanf("%f",&b);
	temp = a;
	a = b;
	b = temp;
	printf("A: %f",a);
	printf("B: %f",b);
	return 0;
}
