#include<stdio.h>
void main()
{
  int originalPrice=2000, discount=10;
  int  discountAmount=(2000*10)/100;
  int finalAmount=originalPrice-discountAmount;
  printf("discountAmount :%d\nfinalAmount :%d",finalAmount,discountAmount);
}