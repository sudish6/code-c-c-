#include<stdio.h>
#include<conio.h>
//#include<math.h>//
void main()
{
float a,b,c,x1,x2,d,real,img;
    printf("Enter a,b,c in ax^2+bx+c");
    scanf("\n%f%f%f",&a,&b,&c);
    d=b*b-4*a*c;
    if(d<0){
    printf("\nRoots are imaginary");
    d=sqrt(fabs (d));
    real=-b/(2*a);
    img=d/(2*a);
    printf("\nx1=%.2f+i%.2f",real,img);
    printf("\nx2=%.2f+i%.2f",real,-img);
    }else{
    printf("\nthe roots are");
    d=sqrt (d);
    x1=(-b+d/(2*a));
    x2=(-b-d)/(2*a);
    printf("\nx1=%.2f and\n x2=%.2f",x1,x2);
    }
     return 0;
}