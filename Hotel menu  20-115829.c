#include<stdio.h>
#include<conio.h>
void main(void)
{
 int salea,saleb,choice;
 float netcom;
 start:
 printf("Menu\n\n");
 printf("1.    sale of A.\n");
 printf("2.    sale of B.\n");
printf("3.    Exit.\n\n");
printf("Enter your choice:");
scanf("%d",&choice);
switch(choice){
 case1:
      printf("Enter a sale of A:");
      scanf("%d",&salea);
      if(salea<=2000)
          netcom=salea*0.50;
          else
              netcom=(salea-2000)*0.06+2000*0.50;
        printf("\n\n Net commission =%.2f",netcom);
       getch();
    goto start;
    case2:
    printf("Enter a sale of B:");
    scanf("%d",&saleb);
    if(saleb<=4000)
      netcom=saleb*0.10;
    else
        netcom=(saleb-4000)*0.12+4000*0.10;
      printf("\n\n Net commission=%.2f",netcom);
      getch();
   goto start;
case3:
  break;
  default:
  printf("\n You must Enter a valid number\n");
  getch();
  }
}