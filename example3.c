#include<stdio.h>
int main()
{
    int a, b, c;
    float d;
    printf("Enter two whole numbers : \n ");
    scanf("%d%d", &a, &b);
    c = a + b + c;
    printf("\nSum = %d\n", c);
    c = a - b;
    printf("\nDifference = %d", c);
    c = a * b;
    printf("\nMultiplicity = %d\n", c);
    d = a / b;
    printf("\nDivision = %f\n", d);
    return 0;
}