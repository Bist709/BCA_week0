#include <stdio.h>
#define PI 3.14
float radius, a, c;
int main()
{
    printf("Enter radius of circle: ");
    scanf("%f", &radius);
    a = PI * radius * radius;
    printf("Area of radius: %f\n", a);
    c = 2 * PI * radius ;
    printf("Circumference is: %f\n", c);
    return 0;
}