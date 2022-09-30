#include<stdio.h>
int main()
{
	int i,j,sum=0;
	for(i=1;i<=1000;i++)
	{
		for(j=1;j<i;j++)
		{
		if(i%j==0)
		{
			sum=sum+j;
		}
		}
		if(sum==i)
		printf("%d ",i);
		sum=0;
	}
	return 0;
}
