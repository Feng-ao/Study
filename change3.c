#include <stdio.h>
int main()
{
    int amount=0;
    int price=100;

    printf("您共花费了（元）：");
    scanf("%d",&price);

    printf("您给出（元）：");
    scanf("%d",&amount);

    int change=amount-price;
    printf("找您%d元。",change);
    
    return 0;
}