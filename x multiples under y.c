#include<stdio.h>
int main()
{
	int x,y,n,a,l,s;
	printf("enter x,y values");
	scanf("%d%d",&x,&y);
	n=y/x;
	a=x;
	l=a*n;
	s=n*(a+l)/2;
	printf("sum of all x multiples under y is %d",s);
}
