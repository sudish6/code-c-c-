#include<stdio.h>
int add(int,int);
void main()
{
    int a,b,sum;
    printf("\n Enter the two numbers:");
    scanf("%d%d",&a,&b);
    sum=add(a,b);
    printf("\n Addition:%d",sum);
}
int add(int x,int y) {
    int add=x+y;
    return (add);
}