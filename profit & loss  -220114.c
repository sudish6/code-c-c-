#include<stdio.h>
#include<conio.h>
int main()
{ 
   float p,L,cp,sp,pp,Lp;
    printf("Enter the cost price and selling price:");
    scanf("%f%f",&cp,&sp);
    if(sp>=cp){
     p=sp-cp;
     pp=(p/cp)*100;
    printf("\n profit:p=%f",p);
    printf("\n profit percentage:=%f",pp);
    }
    else {
    L=cp-sp;
    Lp=(L/cp)*100;
    printf("\n Loss:=%f",L);
    printf("\n Loss percentage:=%f",Lp);
    }
    return 0;
}