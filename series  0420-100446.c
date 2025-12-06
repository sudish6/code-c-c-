#include<stdio.h>

int main()
{
 int n,i;
 float sum=0; 
 printf("How many terms in the series do you want to add?");
 scanf("%d",&n);
 for(i=1;i<=n;i++){
  printf("1/%d",i);
  sum=sum+1/(float)i;
 }
 printf("sudish");
 printf("\n The sum of %d terms of the series=%.2f",n,sum);
 return 0;
}