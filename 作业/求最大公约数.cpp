#include<stdio.h>
int main()
{
	int m,n,r,t;
	scanf("%d %d",&m,&n);
	while(n!=0)
	{
	r=m%n;
	m=n;
	n=r;
	}
	printf("%d",m);
	return 0;
}
