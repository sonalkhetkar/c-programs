#include <stdio.h>
void main()
{
    float mrp;
    float discount;
    printf("enter the discount :");
    scanf("%f", &mrp);
    printf("enter discount :");
    scanf("%f",&discount);
    float discountAmount = (mrp * discount)/ 100;
    printf("discountAmount :%f\n", discountAmount);
    printf("finalAmount :%f", mrp - discountAmount);
}
