#include<stdio.h>

int main()
{
  float temp;
  printf("\n Enter temperature:");
  scanf("%f",&temp);
  if(temp<0)
       printf("\nIce");
  if(temp>=0&&temp<=100)
      printf("\n water");
   if(temp>100)
       printf("\nsteam");
    return 0;
}