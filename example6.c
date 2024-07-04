#include<stdio.h>
int main()
{
    float radius, area, circum;
    const float PI = 3.1416;
    printf("n Enter the radius of a circle:");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circum = 2 *PI *radius;
    printf("\nThe area and circumference of a circle with radius %f \t is : %f and %f", radius, area, circum);
    return 0;
}