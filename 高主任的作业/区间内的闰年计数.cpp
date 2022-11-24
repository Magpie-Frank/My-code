#include<stdio.h>
int gapyear(int n)
{
	if(n%100!=0)
	{
		if(n%4==0)
		return 1;
	}
	if(n%400==0)
	return 1;
	return 0;
}
int main()
{
	int m,n,sum=0;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++)
	{
		if(gapyear(i))
		sum++;
	}
	printf("%d",sum);
	return 0;
}
