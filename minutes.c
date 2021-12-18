#include<stdio.h>
void main()
{
	int hour,min,m;
	printf("enter hour(s) and minute(s)");
	scanf("%d%d",&hour,&min);
	m=hour*60+min;
	printf("%d minutes",m);
}
