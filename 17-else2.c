#include<stdio.h>
void main()
{
int number;
printf("enter the number:");
scanf("%d",&number);
if (number>=10||number <1)
{
 printf("numberis invalid");
 }
 else if(number ==2||number==3||number==5||number==7)
 {
 printf("this is prime numbers",number);
 }
 else
 {
     printf("number is not prime");
 }
}