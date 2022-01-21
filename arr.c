#include<stdio.h>
void main()
{
	int n;
	scanf("%d",&n);
	int arr[n],i;
	int large =0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("%d",large);
}
