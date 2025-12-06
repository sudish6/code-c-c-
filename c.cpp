/*area.c*/
/*A program to calculate area and circumference of a circle*/
#include<stdio.h>
//#define pi  3.14159
int main ()
{
	float r,a,c;
	float pi=3.14159;
	printf("Enter radius of circle:");
	scanf("%d",&r);
	a=pi*r*r;
	c=2*Pi*r;
	printf("\nArea of circle=%f",a);
	printf("\nCircumference of circle=%f",c);
	return 0;
}
