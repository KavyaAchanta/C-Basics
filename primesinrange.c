#include<stdio.h>
#include<math.h>
int main()
{
	int a, b, n, i, is_prime;
	scanf("%d%d", &a, &b);
	for(n=a; n<=b; n++)
	{
		is_prime = 1;
		for(i=2; i<=sqrt(n); i++)
		{
			if(n%i == 0)
			{
				is_prime = 0;
				break;
			}
		
		}
		if(is_prime == 1 && n!=1)
		{
			printf("%d ",n);
		}
	}
	return 0;
	
	
}
