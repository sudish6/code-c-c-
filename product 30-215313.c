/*to calculate product of two integers using pointer*/
#include<stdio.h>

int main()
{
 int x,y,m;
int *p1,*p2;
printf("\n Enter two numbers:");
scanf("%d%d",&x,&y);
p1=&x;
p2=&y;
m=(*p1)*(*p2);
    printf("\n%d x %d = %d",*p1,*p2,m);
    return 0;
}