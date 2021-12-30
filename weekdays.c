#include<stdio.h>
void main()
{
	int x;
	printf("enter  x value");
	scanf("%d",&x);
	if(x==1)
	{
	    printf("monday");
	}
	else if(x==2)
	{
		printf("tuesday");
	}
	else if(x==3)
	{
		printf("wedneday");
	}
	else if(x==4)
	{
		printf("thursday");
	}
	else if(x==5)
	{
		printf("friday");
	}
	else if(x==6)
	{
		printf("saturday");
	}
	else if(x==7)
	{
		printf("sunday");
	}
	else
	{
		printf("invalid input");
		
	}
}
