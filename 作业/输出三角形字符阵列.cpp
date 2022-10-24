#include<stdio.h>
int main()
{
	int n=0,ct=64;
	scanf("%d",&n);
	if((n<1)||(n>=7))
	{
		printf("n值应该在1≤n<7范围内。");
		return 0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n+1-i;j++)
		{
			ct++;
			printf("%c ",ct);
		}
		printf("\n");
	}
	return 0;
}
