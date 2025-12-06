#include<stdio.h>
#include<conio.h>
 float a,b,c;
float sum(float,float,float);
float avg(float, float, float);
float largest(float,float,float);
void main()
{
  printf("\Enter three numbers:");
  scanf("%f%f%f",&a,&b,&c);
  printf("\n SUM=%.2f",sum(a,b,c));
  printf("\n Average=%.2f",avg(a,b,c));
  printf("\n Largerst number=%.2f",largest(a,b,c));
  getch();
}
  float sum(float x,float y,float z)
 {
 return x+y+z;
}
float avg(float x,float y,float z)
  {
   return(x+y+z)/3;
   }
 float largest(float x,float y,float z)
{ 
return(x>y)?((x>z)?x:z):((y>z)?y:z);
}

