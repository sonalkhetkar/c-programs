#include <stdio.h>
void main()
{
  int principal, rate, time, SI;
  printf("enter the principal :");
  scanf("%d", &principal);
  printf("enter the rate :");
  scanf("%d", &rate);
  printf("enter the time :");
  scanf("%d", &time);
  SI = (principal * rate * time) / 100;
 int payableAmount=SI + principal;
  float perMonthpayableAmount = principal / (12 * time);

  printf("simple intrest :%.2f\npaybleAmount :%f\n", SI, payableAmount);
  printf("you need to amount%.2fper month for %.2f years\n", payableAmount, perMonthpayableAmount);
}