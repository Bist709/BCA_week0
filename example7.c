#include<stdio.h>

int main()
{
    int num1,num2;
    int add,subs,mul,div,mod;

    printf("\nEnter First Number :");
    scanf("%d",&num1);

    printf("\nEnter Second Number :");
    scanf("%d",&num2);

    // (+) operator
    add = num1 + num2;
    printf("\nAddition is : %d",add);

    // (-) operator
    subs = num1 - num2;
    printf("\nSubtraction is : %d",subs);

    // (*) operator
    mul = num1 * num2;
    printf("\nMultiplication is : %d",mul);

    // (÷) operator
    div = num1 / num2;
    printf("\nDivision is : %d",div);

    // (%) operator
    mod = num2 % num1;
    printf("\nModulus is : %d",mod);

    return(0);
}