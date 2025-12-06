#include<stdio.h>
#include<conio.h>

int main()
{
   float mth,phy,chm,tot;
   printf("\n Enter Mark's obtained in Math,physics and chemistry:");  
   scanf("%f%f%f",&mth,&phy,&chm);
   tot=mth+phy+chm;
   if(mth>=60&&phy>=50&&chm>=50&&tot>=160){
     printf("\n Eligible for admission");
    }
    else
       {
         printf("\n Not eligible for admission");
       }
    return 0;
}