#include<stdio.h>
void main()
{
	int x,a,b,c,d,e,f,g,h,i,j;
	printf("enter amount");
	scanf("%d",&x);
	a=x/2000;
	x=x%2000;
	printf("2000 notes:%d\n",a);
	b=x/500;
	x=x%500;
	printf("500 notes:%d\n",b);
	c=x/200;
	x=x%200;
	printf("200 notes:%d\n",c);
	d=x/100;
	x=x%100;
	printf("100 notes:%d\n",d);
	e=x/50;
	x=x%50;
	printf("50 notes:%d\n",e);
	f=x/20;
	x=x%20;
	printf("20 notes:%d\n",f);
	g=x/10;
	x=x%10;
	printf("10 notes:%d\n",g);
	h=x/5;
	x=x%5;
	printf("5 notes:%d\n",h);
	i=x/2;
	x=x%2;
	printf("2 notes:%d\n",i);
	j=x/1;
	printf("1 notes:%d\n",j);
}


	
	

