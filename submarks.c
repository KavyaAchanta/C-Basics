#include<stdio.h>
void main()
{
	int M,P,C,CS;
	printf("Enter four subject marks");
	scanf("%d%d%d%d",&M,&P,&C,&CS);
	if(M<35)
	{
		printf("failed in maths\n");
	}
    if(P<35)
	{
		printf("failed in physics\n");
	}
    if(C<35)
	{
		printf("failed in chemistry\n");
	}
	 if(CS<35)
	{
		printf("failed in Computr science");
	}
}
