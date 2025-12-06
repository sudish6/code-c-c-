#include<stdio.h>

int main()
{
   int r,n,sum=0;
   printf("\n Enter the numbers:");
   scanf("%d",&n);
   while(n!=0){
   r=n%10;
   sum=sum+r;
   n=n/10;
 }
printf("\n sum of digits number=%d",sum);
    return 0;
}