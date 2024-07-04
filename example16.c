#include<stdio.h>
int main()
{
    int num1, num2, larger;
    printf("Enter two integers:");
    scanf("%d%d", &num1, &num2);
    //find the large number using ternary operator
    larger=(num1>num2)?num1:num2;
    printf("Larger number is: %d\n",larger);
    return 0;
}