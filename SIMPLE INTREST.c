#include<stdio.h>
void main()
{
	float simpleintrest,P,T,R;
	printf("enter P,T,R");
	scanf("%f%f%f",&P,&T,&R);
	simpleintrest=P*T*R/100;
	printf( "simple intrest:%.2f",simpleintrest);
}
