#include<stdio.h>
int main()
{
    float c, f;
    printf("Enter temperaturein celcius: ");
    scanf("%f", &c);
    f = c * 9 / 5 + 32;
    printf("Temperature in fahrenheit = %f", f);
    return 0;
}