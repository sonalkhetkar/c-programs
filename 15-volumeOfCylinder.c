#include <stdio.h>

void main()
{
    float radius, height,pi;
    radius=20;
    pi=3.14;
    height=1000/(pi*radius*radius);
    printf("height :%.2f",height);
    printf("we need 50 cylinder of height=%.2f and radius=%.2f",radius,height);
}
