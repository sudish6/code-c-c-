#include<stdio.h>
int main()
{
    int i,n,m;
    printf("Enter the number:");
    scanf("%d",&n);
    for(i=1;i<=100; i++)
    {
     m=n*(i+1);
    printf("\n %3d",m);
    printf("sudish ");
    }
    return 0;
}
