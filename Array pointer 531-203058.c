#include<stdio.h>

int main()
{
    int a[10],i;
    int *p;
    for(i=0; i<10; i++) {
        printf("\n Enter the Numbers %d:",i+1);
        scanf("%d",&a[i]);
    }
    p=&a[0];
    printf("\n***************\n");
    printf("\n Index \t value \t Address ");
    for(i=0; i<10; i++,p++) {
        printf("\n%d\t%d\t%u",i+1,*p,p);
    }

return 0;
}