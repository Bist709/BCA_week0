#include <stdio.h>
#define PI 3.14
float radius, a, c;
float area()
{
    return PI * radius * radius;
}
float circum()
{
    return 2 * PI * radius;
}
int main()
{
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    a = area();
    printf("Area of radius: %f\n", a);
    c = circum();
    printf("Circumference is: %f\n", c);
    return 0;
}