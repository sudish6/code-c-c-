#include<stdio.h>
#include<stdlib.h>
int main(int argc, char *argv[])
{
   int x,y,sum;
   if(argc==3){
    x=atoi(argv[1]);
    y=atoi(argv[2]);
    sum=x+y;
    printf("sum=%d",sum);
    }else{
    printf("Enter two Numbers...");
    }
    return 0;
}