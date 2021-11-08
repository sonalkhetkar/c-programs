#include <stdio.h>
void main()
{
    float mrp;
    float discount;
    printf("enter the mrp :");
    scanf("%f", &mrp);
    discount=0;
    if(mrp>50000)
    {
        discount=20;
    }
    float discountAmount = (mrp * discount)/ 100;
    printf("product price :%.2f\n",mrp);
    printf("discountAmount :%.2f\n", discountAmount);
    printf("-------------------------------\n");
    printf("finalAmount :%.2f\n", mrp - discountAmount);

    
}
