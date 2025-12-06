#include<stdio.h>

int main()
{
    int i,n,m;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=10; i++)
    {
      m=i*n;
    printf("\n %d",m);
    }
    return 0;
}