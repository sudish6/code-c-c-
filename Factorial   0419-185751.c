#include<stdio.h>

int main()
{
   int i,n,fact=1;
   printf("\n Enter the number:");
   scanf("\n%d",&n);
    for(i=1; i<=n; i++)
    {
      fact=fact*i;
    }
   printf("\n%d! =%d",n,fact);
   return 0;
}
