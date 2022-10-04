#include<stdio.h>
int main()
{
	int m;
	scanf("%d",&m);
	int i;
	int ans=1;
	for(i=1;i<=m;i++)
	ans=ans*2;
	printf("2^%d = %d",m,ans);
	return 0;
}
