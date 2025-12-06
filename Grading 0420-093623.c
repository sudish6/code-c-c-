#include<stdio.h>
#include<conio.h>
int main()
{
  char c;
  printf("\n Enter the character:");
  scanf("%c",&c);
switch(c){
 case'a':
 case'A':
 printf("\n Distinction");
 break;
  case'b':
  case'B':
   printf("\n Frist class");
  break;
  case'c':
  case'C':
  printf("\n pass");
  break;
case'd':
case'D':
printf("\n Failed");
break;
default:
printf("\n%c is not valid grade",c);
  }
     return 0;
}