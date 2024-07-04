/*Aprogram to computer area of a circle*/
#include<stdio.h>
#define PI 3.1416
int main()
{
    float radius, area;
    printf("\n Enter the radius of the circle:");
    scanf("%f", &radius);
    area = PI*radius*radius;
    printf("\n The area of the circle with radius %f \t is : %f", radius, area);
    return 0;
}