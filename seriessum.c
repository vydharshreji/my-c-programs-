#include<stdio.h>
void main()
	{
		int n, sum=0;
		printf("\n Enter the value of n: ");
		scanf("%d", &n);
		for(int i=1;i<=n;i++)
			{
				sum+=(1/i);
			}
		printf("\n Sum = %d ", sum);
	}