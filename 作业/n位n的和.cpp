#include<stdio.h>
int main()
{
	long long j=0,n=0,t=0,i=0,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		t=i;
		for(j=1;j<i;j++)
		{
			t=t*10+i;
		}
		sum=sum+t;
		t=0;
	}
	printf("%lld",sum);
	return 0;
}
