#include<stdio.h>
void main()
{
	int min,hour, m;
	printf("enter min");
	scanf("%d",&min);
	hour=min/60;
	m=min%60;
	printf("%d hours %d minutes",hour,m);
	
}
