#include<stdio.h>

void main()
{
    int year;
    float amount,rate,interest;
    printf("Enter the principal amount");
    scanf("%f",&amount );
    printf("Enter the rate");
    scanf("%f",&rate);
    printf("Enter the year");
    scanf("%d",year);
    interest=(amount*rate*year)/100;
    printf("\n simple interest=%f",interest);
    return 0;
}