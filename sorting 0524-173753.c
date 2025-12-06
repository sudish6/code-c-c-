#include<stdio.h>

void main()
{
    int a[10],i,j,temp;
    for(i=0; i<9; i++) {
        printf("Enter A[%d]:",i);
        scanf("%d",&a[i]);
    }
    //sorting start.
    for(i=0; i<9; i++) {
        for(j=0; j<9; j++) {
            if(a[i]>a[j+i]) {
                temp=a[i];
                a[i]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    //sorting complete
    printf("\n sorted Array:");
    for(i=0; i<9; i++) {
        printf("\t%d",a[i]);
    }
    return 0;
}