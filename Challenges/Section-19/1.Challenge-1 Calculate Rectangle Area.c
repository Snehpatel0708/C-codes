#include <stdio.h>

void inputDimensions(float *length, float *width) 
{
    printf("Enter the length of the rectangle: ");
    scanf("%f", length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", width);
}
float calculateArea(float length, float width) 
{
    return length * width;
}

int main() 
{
    float length, width, area;
    inputDimensions(&length, &width);

    area = calculateArea(length, width);

    displayArea(area);
    printf("The area of the rectangle is: %.2f square units\n", area);

    return 0;
}
