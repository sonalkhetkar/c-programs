#include <stdio.h>
void main()
{
    float principalAmount = 2000;
    float rate = 5;
    float time = 3;
    float SI = principalAmount * rate * time / 100;
    float payableAmount = SI + principalAmount;
    float perMonthpayableAmount = payableAmount / (12 * time);
    printf("simple intrest :%.2f\npaybleAmount :%f\n", SI, payableAmount);
    printf("you need to amount%.2fper month for %.2f years\n", payableAmount, perMonthpayableAmount);
}