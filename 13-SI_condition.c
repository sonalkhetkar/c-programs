#include<stdio.h>
void main()
{
      float principal, rate, time, SI;
  printf("entter he principal :");
  scanf("%f", &principal);
  rate =10;
    if(principal>1000){
      rate=20;
  }
  printf("entter he time  :");
  scanf("%f", &time);
  
  SI = (principal * rate * time) / 100;
 float payableAmount=SI + principal;
  float perMonthpayableAmount = principal / (12 * time);

  printf("simple intrest :%.2f\npaybleAmount :%f\n", SI, payableAmount);
  printf("you need to amount%.2fper month for %.2f years\n", payableAmount, perMonthpayableAmount);
}