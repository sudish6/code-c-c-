// A program to calculate the area and circumference of circle.
#include<iostream>
#define pi 3.14159
using namespace std;
int main()
{
	float r,a,c;
	cout<<"Enter radius of circlre:";
	cin>>r;
	a=pi*r*r;
	c=2*pi*r;
	cout<<"\nArea of circle="<<a;
	cout<<"\nCircumference of circle="<<c;
	return 0;
}
