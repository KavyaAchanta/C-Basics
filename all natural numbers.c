#include<stdio.h>
int main()
{
	int n,sum,s,m;
	printf("enter n value");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	s=n*(n+1);
	m=n*n;
	printf("sum of n natrual numbers is %d \n",sum);
	printf("sum of n even natural numbers is %d \n",s);
	printf("sum of n odd natural numbers is %d",m);

	
}
