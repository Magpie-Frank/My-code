#include<stdio.h>
int main()
{
	long long sum=0,s=1;
	int n=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=1;j<=i+1;j++)
		s=s*j;
		sum=sum+s;
		s=1;
	}	
	printf("%lld",sum);
	return 0;
}
