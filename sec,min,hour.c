#include<stdio.h>
void main()
{
	int  sec, seconds,hours,minutes;
	printf("enter sec value");
	scanf("%d",&sec);
	hours=sec/3600;
	minutes=(sec%3600)/60;
	seconds=sec%60;
	printf("%d hour(s) %d minute(s) %d second(s)",hours,minutes,seconds);
	
}
