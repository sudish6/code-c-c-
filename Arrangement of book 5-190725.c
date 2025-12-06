#include<stdio.h>
 struct book
{
 int no;
char name[30];
float price;
};
int main()
{
   struct book s[5]; 
   int i;
   for(i=0;i<5;i++){
   printf("Enter Number, Name and price of Book:");
   scanf("%d%s%f",&s[i].no,&s[i].name,&s[i].price);
   }
   printf("\n*****************\n");
   printf("\n no. \tName \t price "); 
   for(i=0;i<5;i++){
   printf("\n%d \t%s \t Rs.%.2f",s[i].no,s[i].name,s[i].price);
    } 
    return 0;
}