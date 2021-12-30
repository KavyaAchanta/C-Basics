#include<stdio.h>
void main()
{
	int cost_price,sell_price;
	printf("enter cost price and sell price ");
	scanf("%d%d",&cost_price,&sell_price);
	if(sell_price>cost_price)
	{
		printf("profit");
	}
	else if(sell_price<cost_price)
	{
		printf("loss");
	}
	else
	{
		printf("neither loss not profit");
	}
}
