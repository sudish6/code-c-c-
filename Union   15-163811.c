#include<stdio.h>
#include<string.h>
union book
{
 int b, no;
 char name[30];
 float price;
};   
int main()
{
  union book b;
     b.no=10;
    printf("\n number:%d",b.no);
    strcpy(b.name,"c programming");
    printf("\n name :%s",b.name);
    b.price=10000.0;
    printf("\n price: Rs.%.2f",b.price);
    return 0;
}