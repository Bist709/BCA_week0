#include<stdio.h>
#include<math.h>
int main()
{
    float n, m, p;
    printf("Enter two numers\n");
    scanf("%f%f", &n, &m);
    p = pow(n, m);
    printf("Power = %f", p);
    return 0;
}