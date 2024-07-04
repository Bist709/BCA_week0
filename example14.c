#include<stdio.h>
int main()
{
    float pricedozen, pricen;
    int n;
    printf("Enter price of a dozen mangos: ");
    scanf("%f", &pricedozen);
    printf("Enter number of mangos: ");
    scanf("%d", &n);
    pricen = pricedozen / 12 * n;
    printf("Price of %d mangos os %f", n, pricen);
    return 0;
}