#include<stdio.h>

int main(void)
{
    int a;
    int result;
    printf("Enter an integer number: ");
    scanf("%d", &a);
    result =a * a;
    printf("The square of %d is: %d\n", a, result);
    return 0;
}

