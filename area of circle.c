#include<stdio.h>
void main()
{
	float radius,area,perimeter;
	printf("enter radius of a circle");
	scanf("%f",&radius);
	area= 3.14*radius*radius;
	perimeter=2*3.14*radius;
	printf("area of the circle with radius %f is %f \n",radius,area);
	printf("perimeter of the circle with radius %f is %f",radius,perimeter);
}
