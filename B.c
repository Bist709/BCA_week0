#include <stdio.h>
int main()
{
    int num1, num2;
    int add, subs, mul, div, mod;
    printf("Enter first NUmber and Second NUmber :");
    scanf("%d %d", &num1, &num2);
    // (+)
    add=num1 + num2;
    subs=num1 - num2;
    mul=num1 * num2;
    div=num1 / num2;
    mod=num1 % num2;
    printf("\nAddition is %d",add);
    printf("\nSubtraction is %d",subs);
    return 0;
    }